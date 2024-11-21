#include <stdio.h>

int main() {
    // Declaring and initializing an array of integers
    int numbers[5] = {10, 20, 30, 40, 50};

    // Accessing and printing elements of the array
    printf("Elements of the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    // Modifying an element of the array
    numbers[2] = 35;
    printf("\nAfter modification:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}
