#include <stdio.h>

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x = 4, y = 6;
    int result = multiply(10, 5);
    
    // Reusing the multiply function multiple times
    printf("4 * 6 = %d\n", multiply(x, y));
    printf("3 * 7 = %d\n", multiply(3, 7));
    printf("The result is: %d", result);

    printf("4 * 6 = %d\n", multiply(x, y));
    printf("3 * 7 = %d\n", multiply(3, 7));
    printf("The result is: %d", result);

    
    return 0;
}
