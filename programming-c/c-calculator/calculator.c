#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float div(int a, int b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}

int main()
{
    printf("%d\n", sum(10, 21));
    printf("%d\n", sub(10, 21));
    printf("%d\n", mul(10, 21));
    printf("%f\n", div(21, 10));
    printf("%d\n", mod(10, 21));

    return 0;
}
