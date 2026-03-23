#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dice, roll;

    srand(time(0)); // seed random numbers

    printf("Enter 1 to roll the dice: ");
    scanf("%d", &roll);

    if (roll == 1) {
        dice = rand() % 6 + 1;
        printf("You landed on: %d\n", dice);
    } else {
        printf("You did not roll the dice.\n");
    }

    return 0;
}