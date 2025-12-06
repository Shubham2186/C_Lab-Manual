#include <stdio.h>

int main() {
    int num;
    printf("Enter a 4-digit number : ");
    scanf("%d", &num);
    if(num >=1000 && num <=9999) {
        int digit,rev_num = 0;
        int i = num;
        while(i>0) {
            digit = i%10;
            rev_num = (rev_num*10) + digit;
            i = i/10;
        }
        printf("The reverse of %d is %d.\n", num, rev_num);
    } else {
        printf("Please enter a valid 4-digit number.\n");
    }
    return 0;
}