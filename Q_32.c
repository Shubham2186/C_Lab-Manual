#include <stdio.h>
int factorial(int n) {
    if (n < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
        return -1;
    }
    else if (n == 0 || n == 1)
        return 1;
    int result = 1,i;
    for ( i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main() { 
    int num;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    int fact = factorial(num);
    if (fact != -1)
        printf("The factorial of %d is %d.\n", num, fact);
    
    return 0;
}