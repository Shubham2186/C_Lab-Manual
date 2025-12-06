#include <stdio.h>

int main() {
    char ch;
    printf("Enter a lowercase alphabet : ");
    scanf("%c",&ch);
    if (ch >= 'a' && ch <= 'z') {
        char uppercase = ch - ('a' - 'A');
        printf("The uppercase of %c is %c.\n", ch, uppercase);
    } else {
        printf("Invalid input. Please enter a lowercase alphabet.\n");
    }
    return 0;
}