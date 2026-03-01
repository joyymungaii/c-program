#include <stdio.h>

// Function called "add" to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    int result = add(3, 5);  // Call the function with 3 and 5
    
    
    
    // Reusing the add function multiple times
    printf("5 + 10 = %d\n", add(x, y));
    printf("7 + 3 = %d\n", add(7, 3));
    printf("Sum: %d\n", result); // Prints: Sum: 8
    
    return 0;
}