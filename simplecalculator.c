#include <stdio.h>

int main() {
    int a, b, choice;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("1-Add  2-Subtract  3-Multiply  4-Divide\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Result: %d", a + b);
    } else if (choice == 2) {
        printf("Result: %d", a - b);
    } else if (choice == 3) {
        printf("Result: %d", a * b);
    } else if (choice == 4) {
        printf("Result: %d", a / b);
    } else {
        printf("Invalid choice");
    }

    return 0;
}