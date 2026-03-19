#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    
    int player, computer;
    
    printf("Rock Paper Scissors Game\n");
    printf("1 = Rock, 2 = Paper, 3 = Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &player);
    
    if (player < 1 || player > 3) {
        printf("Invalid choice!\n");
        return 1;
    }
    
    computer = (rand() % 3) + 1;
    
    const char *choices[] = {"", "Rock", "Paper", "Scissors"};
    printf("You chose: %s\n", choices[player]);
    printf("Computer chose: %s\n\n", choices[computer]);
    
    if (player == computer) {
        printf("It's a tie!\n");
    } else if (player == 3) {
        printf("You win! Scissors wins!\n");
    } else if (computer == 3) {
        printf("You lose! Computer's Scissors wins!\n");
    } else if ((player == 1 && computer == 2) || (player == 2 && computer == 1)) {
        printf("You %s!\n", player == 2 ? "win" : "lose");
    }
    
    return 0;
}