#include <stdio.h>

int main() {
    int bool1, bool2;

    // Read two boolean values from the user
    printf("Enter first boolean value (0 for false, 1 for true): ");
    scanf("%d", &bool1);

    printf("Enter second boolean value (0 for false, 1 for true): ");
    scanf("%d", &bool2);

    // Demonstrate logical operators
    printf("\nLogical Operations:\n");

    // AND operator
    printf("%d AND %d = %d\n", bool1, bool2, bool1 && bool2);

    // OR operator
    printf("%d OR %d = %d\n", bool1, bool2, bool1 || bool2);

    // NOT operator
    printf("NOT %d = %d, NOT %d = %d\n", bool1, !bool1, bool2, !bool2);

    return 0;
}