#include <stdio.h>

int main() {
    // Declare and initialize a character array (string)
    char str1[] = "Hello, World!";
    
    // Declare a character array and assign values later
    char str2[20];

    // Assign a value to the second string using standard input
    printf("Enter a string (up to 19 characters): ");
    fgets(str2, sizeof(str2), stdin); // Reads input including spaces, up to 19 characters

    // Display the strings
    printf("\nDemonstrating character arrays as strings:\n");
    printf("String 1 (initialized directly): %s\n", str1);
    printf("String 2 (entered by user): %s\n", str2);

    // Modify an individual character
    str1[7] = 'C'; // Changing 'W' in "World" to 'C'
    printf("\nModified String 1: %s\n", str1);

    // Display each character of the first string
    printf("\nCharacters in String 1:\n");
    for (int i = 0; str1[i] != '\0'; i++) {
        printf("str1[%d] = %c\n", i, str1[i]);
    }

    return 0;
}
