#include <stdio.h>

int main() {
    int i;

    printf("Demonstrating the use of continue statement:\n");

    // Loop from 1 to 10
    for (i = 1; i <= 10; i++) {
        if (i == 6) {
            // Skip the rest of the loop body when i is 6
            printf("Skipping iteration at i = %d\n", i);
            continue;
        }
        printf("i = %d\n", i);
    }

    printf("Loop completed.\n");

    return 0;
}
