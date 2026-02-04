#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 10) {
        printf("You can play!");
    } else {
        printf("Too young!");
    }

    return 0;
}