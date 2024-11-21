#include <stdio.h>

int main() {
    // Declare variables
    int intVar;
    float floatVar;
    char charVar;
    double doubleVar;
    char stringVar[100];

    // Prompt user to input values
    printf("Enter integer value: ");
    scanf("%d", &intVar);

    printf("Enter floating-point value: ");
    scanf("%f", &floatVar);

    printf("Enter character: ");
    scanf(" %c", &charVar); // Note the space before %c

    printf("Enter double value: ");
    scanf("%lf", &doubleVar);

    printf("Enter string: ");
    scanf("%99s", stringVar); // Prevent buffer overflow

    // Display variable values
    printf("\nVariables and their values:\n");
    printf("Integer variable: %d\n", intVar);
    printf("Floating-point variable: %.2f\n", floatVar);
    printf("Character variable: %c\n", charVar);
    printf("Double variable: %.2lf\n", doubleVar);
    printf("String variable: %s\n", stringVar);

    return 0;
}

