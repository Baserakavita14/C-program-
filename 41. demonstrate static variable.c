#include <stdio.h>

// Function to demonstrate static variable
void demoStatic() {
    static int count = 0; // Declare a static variable
    count++;
    printf("Static variable count: %d\n", count);
}

int main() {
    // Call the function multiple times
    printf("First call to demoStatic:\n");
    demoStatic();

    printf("Second call to demoStatic:\n");
    demoStatic();

    printf("Third call to demoStatic:\n");
    demoStatic();

    return 0;
}
