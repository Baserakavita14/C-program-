#include <stdio.h>

int main() {
    // Declaring and initializing a character array
    char str[] = "Hello, World!";

    // Displaying the string
    printf("String: %s\n", str);

    // Accessing individual characters of the string
    printf("Individual characters:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("str[%d] = %c\n", i, str[i]);
    }

    // Modifying a character in the string
    str[7] = 'D'; // Changing 'W' to 'D'
    printf("\nAfter modification:\n");
    printf("String: %s\n", str);

    return 0;
}
