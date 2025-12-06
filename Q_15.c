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
    if (percent >= 35.0) {
        printf("The student has passed the exam.\n");
    } else {
        printf("The student has failed the exam.\n");
    }
    return 0;
}