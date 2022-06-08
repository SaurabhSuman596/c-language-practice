// program to check float or int

#include <stdio.h>
#include <string.h>

int main()
{
    printf("Programe to check a no is fl;oat or int : \n");
    char a[10];
    printf("Enter Your no : ");
    gets(a);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == '.')
        {
            printf("Your number is float");
            break;
        }
        else if (i == strlen(a) - 1)
        {
            printf("Your number is int");
        }
    }
    return 0;
}