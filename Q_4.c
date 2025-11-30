#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char ch = 'A';
    printf("Size of int, char and float is %d, %d and %d respectively.\n",sizeof(a),sizeof(ch),sizeof(b));

    return 0;
}