// programe to find the average of n number

#include <stdio.h>

int main()
{
    int a;
    float total = 0;
    printf("Programe to find the average of n number: \n");
    printf("enter the number you want the average : ");
    scanf("%d", &a);
    for (int i = 0; i <= a; i++)
    {
        total = total + i;
    }

    total = total / a;
    printf("The average of 1 to %d : %f ", a, total);
    return 0;
}