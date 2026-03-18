#include <stdio.h>

int main() {
    int math, english, science;
    int total, average;

    printf("Enter Math score: ");
    scanf("%d", &math);

    printf("Enter English score: ");
    scanf("%d", &english);

    printf("Enter Science score: ");
    scanf("%d", &science);

    total = math + english + science;
    average = total / 3;

    printf("Total score: %d\n", total);
    printf("Average score: %d\n", average);

    return 0;
}