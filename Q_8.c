#include <stdio.h>

int main() {
    int num;
    printf("Enter a 4-digit number : ");
    scanf("%d", &num);
    if(num >=1000 && num <=9999) {
        int sum  =0,digit;
        int i = num;
        while(i>0) {
            digit = i%10;
            sum += digit;
            i = i/10;
        }
        printf("The sum of digits of %d is %d.\n", num, sum);
    } else {
        printf("Please enter a valid 4-digit number.\n");
    }
    return 0;
}