#include <stdio.h>

int main() {
    int n, num;
    int product = 1;
    int foundOdd = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num % 2 != 0) {  // check if odd
            product *= num;
            foundOdd = 1;
        }
    }

    if(foundOdd)
        printf("Product of odd numbers = %d\n", product);
    else
        printf("No odd numbers entered.\n");

    return 0;
}