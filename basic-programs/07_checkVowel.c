// How to check if a char is vowel or not

#include <stdio.h>

int main()
{
    char a;
    printf("This is the programme to check that char is vowel or not \n");
    printf("Enter any char : \n");
    scanf("%s", &a);

    switch (a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%s is a vowel\n");
        break;
    default:
        printf("%s is not a vowel\n");
        break;
    }

    return 0;
}