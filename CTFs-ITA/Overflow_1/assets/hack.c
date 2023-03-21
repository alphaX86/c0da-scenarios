#include <stdio.h>
#include <string.h>

void flag() {
    printf("Damn! You got me!\n");
    printf("Here is your flag: Good job lad...\n");
    printf("ITA{buff3r_15_h4ck3d}\n");
}

int main() {
    printf("Hello there!");
    printf("Let's play a game!\n");
    printf("I will ask you to enter a number and you will have to guess it!\n");
    printf("If you guess it, you might get the flag!\n");
    printf("Enter a number from 1-200\n");
    char num[10];
    gets(num);
    printf("Location: %p\n", &flag);
    printf("You are wrong!\n");
    return 0;
}
