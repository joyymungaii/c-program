#include <stdio.h>

int main() {
    int number;
    // Original part of the code
    printf("Enter your number: ");
    scanf("%d", &number);

    if (number > 10) {
        printf("That's a big number!\n");
    } else {
        printf("That's a small number!\n");
    }
    printf("Awesome!\n");

    return 0;
}