#include <stdio.h>

int main() {
    int age;
    int favoriteNumber;

    // Original part of the code
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 10) {
        printf("You can play!\n");
    } else {
        printf("Too young!\n");
    }

    // New part: Asking for a number
    printf("Ask user for a number: ");
    scanf("%d", &favoriteNumber);
    printf("Number received!\n");

    return 0;
}