#include <stdio.h>
int sum(int n) {
    int sum = 0, i = n;
    while (i > 0) {
        sum += i;
        i--;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Sum of first %d natural numbers is : %d\n",n,sum(n));
    return 0;
}