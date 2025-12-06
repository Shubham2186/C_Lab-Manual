#include <stdio.h>

int main() {
    int radius;
    printf("Enter the radius of circle : ");
    scanf("%d",&radius);
    printf("The area of circle with radius %d is %.2f.",radius, 3.14*radius*radius);
    return 0;
}