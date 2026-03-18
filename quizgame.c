#include <stdio.h>

int main() {
    int answer;
    int score = 0;

    // Question 1
    printf("What is 2 + 2?\n");
    printf("1) 3   2) 4   3) 5\n");
    printf("Your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    // Question 2
    printf("\nWhat is 5 * 2?\n");
    printf("1) 10   2) 7   3) 12\n");
    printf("Your answer: ");
    scanf("%d", &answer);

    if (answer == 1) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    // Question 3
    printf("\nWhat is 10 - 3?\n");
    printf("1) 6   2) 7   3) 8\n");
    printf("Your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    // Final Score
    printf("\nYour score: %d/3\n", score);

    return 0;
}