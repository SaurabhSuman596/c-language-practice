// programe to find armstrong number

#include <stdio.h>

int main()
{
    int a;
    int total = 0;
    printf("programme to check armstrong number\n");
    printf("Enter the no: ");
    scanf("%d", &a);
    int temp = a;

    while (temp > 0)
    {
        total = total + ((temp % 10) * (temp % 10) * (temp % 10));
        temp = temp / 10;
    }

    if (total == a)
    {
        printf("%d is palindromr", a);
    }
    else
    {
        printf("%d is not a palindrome ", a);
    }
    return 0;
}