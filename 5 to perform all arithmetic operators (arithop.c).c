#include <stdio.h>

int main() {
    float num1, num2;

    // Read two numbers from the user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform arithmetic operations
    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;
    float quotient = num1 / num2;
    float remainder = (int)num1 % (int)num2; // Modulus operation works only on integers

    // Display the results
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);
    printf("Quotient: %.2f\n", quotient);
    printf("Remainder: %.2f\n", remainder);

    return 0;
}
