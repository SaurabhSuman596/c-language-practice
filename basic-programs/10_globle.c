// Program to print the Largest and Smallest using Global Declaration

#include <stdio.h>

int a = 10;
int b = 12;

int main()
{
    printf(" Program to print the Largest and Smallest using Global Declaration\n");
    if (a > b)
    {
        printf("%d is greater", a);
    }
    else
    {
        printf("%d is greater", b);
    }
    printf(".....programme finished......");
    return 0;
}