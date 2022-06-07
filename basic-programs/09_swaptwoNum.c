// How to swap two numbers

#include <stdio.h>

int main()
{
    int a = 12;
    int b = 14;
    printf("previous value \n a=%d b=%d\n", a, b);
    a = a + b - (b = a);
    printf("After value \n a=%d b=%d\n", a, b);
    return 0;
}