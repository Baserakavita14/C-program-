#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    // Read operator from the user
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Read two numbers from the user
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform operation based on the operator
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator entered.\n");
    }

    return 0;
}
