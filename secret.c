#include <stdio.h>

int main() {
    int secret = 7;
    int guess;

    printf("Guess the number:\n");

    while (guess != secret) {
        scanf("%d", &guess);

        if (guess < secret) {
            printf("Too small!\n");
        } else if (guess > secret) {
            printf("Too big!\n");
        } else {
            printf("Correct! You win!\n");
        }
    }

    return 0;
}