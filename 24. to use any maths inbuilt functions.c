#include <stdio.h>
#include <math.h>

int main() {
    double num = 25.0;
    double angle = 45.0; // In degrees

    // Convert angle to radians for trigonometric functions
    double radians = angle / 180.0;

    printf("Demonstrating 5 math functions:\n\n");

    // 1. Square root (sqrt)
    printf("1. Square root of %.2f = %.2f\n", num, sqrt(num));

    // 2. Power (pow)
    printf("2. %.2f raised to the power 3 = %.2f\n", num, pow(num, 3));

    // 3. Sine (sin)
    printf("3. Sine of %.2f degrees = %.2f\n", angle, sin(radians));

    // 4. Cosine (cos)
    printf("4. Cosine of %.2f degrees = %.2f\n", angle, cos(radians));

    // 5. Natural logarithm (log)
    printf("5. Natural logarithm of %.2f = %.2f\n", num, log(num));

    return 0;
}

