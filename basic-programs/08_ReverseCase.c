// Change the Case of a char

#include <stdio.h>
#include <ctype.h>

int main()
{
    char a;
    printf("This is a  programme to change the cas e of a char\n");
    printf("Enter any cahr : ");
    scanf("%c", &a);
    printf("%c ", toupper(a));
    return 0;
}