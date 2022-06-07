// this is the programe tofind the factorial of a number

#include <stdio.h>

int main()
{
    int userInput;
    int total = 1;
    printf("This is the progarame to find the factorial of a number");
    printf("Enter the number to find the factorial: ");
    scanf("%d", &userInput);
    while (userInput > 0)
    {
        if (userInput == 0)
        {
            total = 1;
        }
        else
        {
            total = total * userInput;
        }
        userInput--;
    }

    printf("The factorial of %d = %d ", userInput, total);
    return 0;
}