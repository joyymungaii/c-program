#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice;
    int result;
    
    srand(time(0));
    
    printf("=== Coin Tossing Game ===\n");
    
    while (1) {
        printf("\nPress 1 to toss the coin (or any other key to exit): ");
        scanf("%d", &choice);
        
        if (choice != 1) {
            printf("Thanks for playing!\n");
            break;
        }
        
        result = rand() % 2;
        
        if (result == 0) {
            printf("Result: HEADS\n");
        } else {
            printf("Result: TAILS\n");
        }
    }
    
    return 0;
}