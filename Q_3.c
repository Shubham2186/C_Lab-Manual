#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);
    printf("The average of %d and %d is : %.2f\n", num1, num2, ((float)num1 + (float)num2)/2);
    return 0;
}