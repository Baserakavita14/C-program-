#include <stdio.h>

int main() {
    int num;
    float fnum;
    char character;

    // Read variables from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("float number 73: ");
    scanf("%f", &fnum);

    printf("character 02: ");
    scanf(" %c", &character); // Note the space before %c to consume whitespace (like newline)

    // Displaying the values entered by the user
    printf("\nValues you entered 75:\n");
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", fnum); // Displaying float with 2 decimal places
    printf("Character: %c\n", character);

    return 0;
}
