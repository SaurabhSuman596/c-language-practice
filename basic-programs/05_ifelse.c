// programe to find the greter number

#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("This is a game to learn about the number \n");
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the secod number : ");
    scanf("%d", &b);
    if (a == b)
    {
        printf("Both number is equal \n");
    }
    else if (a > b)
    {
        printf("%d is greater then %d \n", a, b);
    }
    else
    {
        printf("%d is greater then %d \n", a, b);
    }

    printf("......programme finished.......");
    return 0;
}