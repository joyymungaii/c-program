#include <stdio.h>

int main() {
    int num;

    while (1) {
        printf("Enter number (0 to stop): ");
        scanf("%d", &num);

        if (num == 0) {
            printf("Goodbye!\n");
            break;
        }

        if (num % 2 == 0) {
            printf("Even\n");
        } else {
            printf("Odd\n");
        }
    }

    return 0;
}