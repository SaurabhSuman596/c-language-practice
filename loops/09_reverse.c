// Prograame to reverse a string

#include <stdio.h>
#include <string.h>

int main()
{
    char userIntput[50];

    printf("Programme to reverse a string ; \n");
    printf("Enter your string : ");
    gets(userIntput);
    int lent = strlen(userIntput);
    char revString[lent];
    printf("%d\n", lent);

    for (int i = 0; i <= lent - 1; i++)
    {
        revString[lent - 1 - i] = userIntput[i];
    }

    printf("%s", revString);

    return 0;
}