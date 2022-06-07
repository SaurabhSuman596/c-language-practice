// guess the number

#include <stdio.h>

int main()
{
    int b;
    printf("This is game to guess the correct number \n");
    printf("Enter the number to guess the correct no : ");
    scanf("%d", &b);
    switch (b)
    {
    case 5:
        printf("You was very close to the number");
        break;
    case 1:
        printf("You are very far from the number");
        break;
    case 8:
        printf("***********YOU WON *************");
        break;
    default:
        printf("Nice try ! Best of luck for the next time");
        break;
    }
    return 0;
}