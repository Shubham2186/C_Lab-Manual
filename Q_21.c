#include <stdio.h>

int main() {
    float dollar;
    printf("Enter amount in dollars : ");
    scanf("%f",&dollar);
    printf("The INR value of %.2f$ is %.2f.\n",dollar, (89.93)*dollar);
    return 0;
}