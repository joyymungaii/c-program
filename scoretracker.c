#include <stdio.h>

int main() {
    int scores[5];
    int i, max, player;

    for (i = 0; i < 5; i++) {
        printf("Player %d score: ", i + 1);
        scanf("%d", &scores[i]);
    }

    max = scores[0];
    player = 1;

    for (i = 1; i < 5; i++) {
        if (scores[i] > max) {
            max = scores[i];
            player = i + 1;
        }
    }

    printf("Highest score: Player %d with %d points\n", player, max);

    return 0;
}