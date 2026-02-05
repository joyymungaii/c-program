#include <stdio.h>

int main() {
    char name[50];
    
    printf("What is your name? ");
    scanf("%s", name);
    
    printf("Welcome %s\n", name);
    
    return 0;
}