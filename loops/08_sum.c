// Print the sum of 1 to n

#include <stdio.h>

int main()
{
    printf("Enter the number you want sum \n");
    int a;
    printf("Enter your number : ");
    scanf("%d", &a);

    int total = 0;

    for (int i = 0; i <= a; i++)
    {
        total = total + i;
    }

    printf("Total : %d", total);
    return 0;
}