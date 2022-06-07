// Using gets() puts() function

#include <stdio.h>

int main()
{
    char name[10];
    printf("Enter Your Name : \n");
    gets(name);
    printf("Your name is : ");
    puts(name);
    printf("......Programme is finished......");
    return 0;
}