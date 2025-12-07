#include <stdio.h>

int main() {
    float celcius;
    printf("Enter the temperature in celcius : ");
    scanf("%f",&celcius);
    printf("The fahrenheit value of %.2f celcius is %.2f.\n",celcius,(9.0/5)*celcius + 32);
    return 0;
}