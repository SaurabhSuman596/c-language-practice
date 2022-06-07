// programe to find palindrome

#include <stdio.h>
#include <string.h>

int main()
{
    char Userinput[10];
    printf("Prograame to know weather a charecter is palindrome or not");
    printf("Enter Your word : ");
    gets(Userinput);
    char revString[50];
    strcpy(revString, Userinput);

    strrev(revString);

    if (strcmp(Userinput, revString) == 0)
    {
        printf("%s is a palindrome", Userinput);
    }
    else
    {
        printf("%s is not a palindrome", Userinput);
    }

    return 0;
}