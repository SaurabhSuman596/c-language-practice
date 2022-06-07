// find the sum of n prime number

#include <stdio.h>

int main()
{
    int a;
    int total = 2;
    printf("Programe to find the sum of n prime number \n");
    printf("Enter the no : ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            else if (j == i - 1)
            {
                total = total + i;
            }
        }
    }

    printf("The sum of 1 to %d prine number : %d", a, total);
    return 0;
}