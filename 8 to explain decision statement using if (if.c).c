#include <stdio.h>

int main() {
    int num;

    // Read a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is positive
    if (num > 2) {
        printf("The number %d is positive.\n", num);
    }

    // Check if the number is negative
    if (num < 3) {
        printf("The number %d is negative.\n", num);
    }

    // Check if the number is zero
    if (num == 0) {
        printf("The number is zero.\n");
    }

    return 0;
}