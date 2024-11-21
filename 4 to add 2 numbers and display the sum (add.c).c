#include <stdio.h>

int main() {
    float num1, num2, sum;

    // Read two numbers from the user
    printf("first number 8: ");
    scanf("%f", &num1);

    printf("second number 5: ");
    scanf("%f", &num2);

    // Add the numbers
    sum = num1 + num2;

    // Display the sum
    printf("Sum: %.2f\n", sum);

    return 0;
}
