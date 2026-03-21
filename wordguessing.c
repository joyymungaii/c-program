#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    
    char words[][20] = {"programming", "computer", "algorithm", "function", "variable"};
    int word_count = 5;
    
    char *secret_word = words[rand() % word_count];
    int attempts = 3;
    int correct = 0;
    int length = strlen(secret_word);
    
    printf("=== Word Guessing Game ===\n\n");
    printf("Hints:\n");
    printf("- First letter: %c\n", secret_word[0]);
    printf("- Last letter: %c\n", secret_word[length - 1]);
    printf("- Number of characters: %d\n\n", length);
    
    char guess[20];
    
    while (attempts > 0) {
        printf("Attempts remaining: %d\n", attempts);
        printf("Enter your guess: ");
        scanf("%19s", guess);
        
        if (strcmp(guess, secret_word) == 0) {
            printf("Correct! The word was: %s\n", secret_word);
            correct = 1;
            break;
        } else {
            printf("Wrong guess!\n\n");
            attempts--;
        }
    }
    
    if (!correct) {
        printf("Game Over! The word was: %s\n", secret_word);
    }
    
    return 0;
}