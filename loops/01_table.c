// Proghram to find table of a number

#include <stdio.h>

int main()
{
    int a;
    printf("This is the programe to find the table of the number.");
    printf("Enter the number you want to find the table : ");
    scanf("%d", &a);

    for (int i = 1; i <= 10; i++)
    {
        int total = a * i;
        printf("%d X %d = %d\n", a, i, total);
    }
    printf(".........Programme finished........");
    return 0;
}