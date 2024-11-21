#include <stdio.h>

int main() {
    int i;

    // Loop to print even numbers from 1 to 10
    printf("Even numbers from 1 to 10:\n");
    for (i = 1; i <= 10; i++) {
        // If i is odd, skip to the next iteration
        if (i % 2 != 0) {
            continue;
        }
        printf("%d ", i);
    }

    printf("\nLoop ended.\n");

    return 0;
}
