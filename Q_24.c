#include <stdio.h>
int sum(int x, int y) {
    return x + y;
}
int difference(int x, int y) {
    return x - y;
}
int product(int x, int y) {
    return x * y;
}
float division(int x, int y) {
    if (y != 0)
        return (float)x / y;
    else {
        printf("Error: Division by zero.\n");
        return 0.0;
    }
}
int main() {
    printf("*********Simple calculator*********\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n\n\n\n");
    int num1, num2, choice;
    printf("Enter the value of first number : ");
    scanf("%d",&num1);
    printf("Enter the value of second number : ");
    scanf("%d",&num2);
    printf("Enter your choice (1-4) : ");
    scanf("%d",&choice);
    switch (choice) {
        case 1:
            printf("The sum of %d and %d is %d\n", num1, num2, sum(num1, num2));
            break;
        case 2:
            printf("The difference between %d and %d is %d\n", num1, num2, difference(num1, num2));
            break;
        case 3:
            printf("The product of %d and %d is %d\n", num1, num2, product(num1, num2));
            break;
        case 4:
            printf("The division of %d by %d is %.2f\n", num1, num2, division(num1, num2));
            break;
        default:
            printf("Invalid choice! Please select a valid option (1-4).\n");
            break;
    }
    return 0;
}