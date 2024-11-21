#include <stdio.h>

int main() {
    char character = 'A'; // Initializing a character variable with the character 'A'

    // Displaying the character and its ASCII value
    printf("Character: %c\n", character);
    printf("ASCII Value: %d\n", character);

    // Incrementing the character
    character++;
    printf("After incrementing, character: %c\n", character);

    // Using character input
    printf("Enter a character: ");
    scanf("%c", &character);
    printf("You entered: %c\n", character);

    return 0;
}
