#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the value of first number  :");
    scanf("%d",&num1);
    printf("Enter the value of second number : ");
    scanf("%d",&num2);
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping, first number is %d and second number is %d.\n",num1, num2);
    return 0;
}