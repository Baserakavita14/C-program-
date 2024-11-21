#include <stdio.h>

int main() {
    float num1, num2;

    // Read two numbers from the user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Demonstrate relational operators
    printf("\nRelational Operations:\n");

    // Equality check
    if (num1 == num2) {
        printf("%.2f is equal to %.2f\n", num1, num2);
    } else {
        printf("%.2f is not equal to %.2f\n", num1, num2);
    }

    // Inequality check
    if (num1 != num2) {
        printf("%.2f is not equal to %.2f\n", num1, num2);
    } else {
        printf("%.2f is equal to %.2f\n", num1, num2);
    }

    // Greater than check
    if (num1 > num2) {
        printf("%.2f is greater than %.2f\n", num1, num2);
    } else {
        printf("%.2f is not greater than %.2f\n", num1, num2);
    }

    // Less than check
    if (num1 < num2) {
        printf("%.2f is less than %.2f\n", num1, num2);
    } else {
        printf("%.2f is not less than %.2f\n", num1, num2);
    }

    // Greater than or equal to check
    if (num1 >= num2) {
        printf("%.2f is greater than or equal to %.2f\n", num1, num2);
    } else {
        printf("%.2f is not greater than or equal to %.2f\n", num1, num2);
    }

    // Less than or equal to check
    if (num1 <= num2) {
        printf("%.2f is less than or equal to %.2f\n", num1, num2);
    } else {
        printf("%.2f is not less than or equal to %.2f\n", num1, num2);
    }

    return 0;
}
