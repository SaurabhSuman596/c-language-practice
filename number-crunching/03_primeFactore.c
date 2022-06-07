// programme to print prime factire of a no

#include <stdio.h>

int main()
{
    int a;
    printf("Progreme to compute prime factor \n");
    printf("Entet the number : ");
    scanf("%d", &a);
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            for (int j = 2; i > j; j++)
            {
                if (i % j == 0)
                {
                    break;
                }
                else
                {
                    if (j + 1 == i)
                    {
                        printf("%d ", i);
                    }
                }
            }
        }
    }
    return 0;
}