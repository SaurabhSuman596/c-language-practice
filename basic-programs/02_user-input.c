// Taking Input from User

#include <stdio.h>

void main()
{
    int a;
    float b;
    char ch;
    printf("Enter a int number\n");
    scanf("%d", &a);
    printf("enter a float number \n");
    scanf("%f", &b);
    printf("Enter a char value \n");
    scanf(" %c", &ch);
    printf("Input has been taken %d ,%f \n", a, b);
    printf("char variable %c \n", ch);
    printf("........Code finished.......");
}