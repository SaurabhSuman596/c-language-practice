// This is the progarme to fiind the fibonacci number :

#include <stdio.h>

int main()
{
    int a;
    int b = 0;
    int prev = 0;
    int next = 1;
    int total = 0;
    printf("This is the progarme to find the fibonacci number : \n");
    printf("Enter the number for fibbonaci : \n");
    scanf("%d", &a);
    printf("%d %d ", prev, next);
    while (b <= a)
    {
        total = prev + next;
        printf("%d ", total);
        prev = next;
        next = total;
        b++;
    }
    return 0;
}