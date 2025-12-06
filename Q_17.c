#include <stdio.h>

int main() {
    int C, CAD, DE, maths, physics;
    printf("Enter marks of C programming : ");
    scanf("%d",&C);
    printf("Enter marks of CAD : ");
    scanf("%d",&CAD);
    printf("Enter marks of Digital Electronics : ");
    scanf("%d",&DE);
    printf("Enter marks of maths : ");
    scanf("%d",&maths);
    printf("Enter marks of Physics : ");
    scanf("%d",&physics);
    float percent = (C+CAD+DE+maths+physics)/5.0;
    printf("The percentage obtained is %.2f%%.\n",percent);
    if (percent >= 90) {
        printf("Grade A\n");
    } else if (percent >= 80) {
        printf("Grade B\n");
    } else if (percent >= 70) {
        printf("Grade C\n");
    } else if (percent >= 60) {
        printf("Grade D\n");
    } else if (percent >= 40) {
        printf("Grade E\n");
    } else {
        printf("Grade F\n");
    }
    return 0;
}