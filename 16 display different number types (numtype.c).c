#include <stdio.h>

int main() {
    int number;

    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("%d is a positive number.\n", number);
    } else if (number < 0) {
        printf("%d is a negative number.\n", number);
    } else {
        printf("You entered zero.\n");
    }

    return 0;
}