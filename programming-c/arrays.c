#include<stdio.h>

int main() {
    int foo[4];

    foo[0] = 1;
    foo[1] = 2;
    foo[2] = 3;
    foo[3] = 4;

    printf("The first value of this array is %d\n", foo[0]);
    printf("The second value of this array is %d\n", foo[1]);
    printf("The third value of this array is %d\n", foo[2]);
    printf("The fourth value of this array is %d\n", foo[3]);
}