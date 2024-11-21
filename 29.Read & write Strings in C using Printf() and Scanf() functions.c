#include <stdio.h>

int main() {
    // Declare a character array (string) with sufficient size
    char name[50];
    char city[50];

    printf("Demonstrating Reading and Writing Strings in C:\n\n");

    // Read a string using scanf()
    printf("Enter your name: ");
    scanf("%s", name); // Reads a single word (stops at whitespace)

    // Clear input buffer (optional for some compilers)
    while (getchar() != '\n');

    // Read another string with spaces using scanf with %[^\n] format specifier
    printf("Enter your city: ");
    scanf("%[^\n]", city); // Reads until a newline character is encountered

    // Write (display) the strings using printf()
    printf("\nDisplaying the entered strings:\n");
    printf("Name: %s\n", name);
    printf("City: %s\n", city);

    return 0;
}
