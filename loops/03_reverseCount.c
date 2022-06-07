// print count from 10 to 1.

#include <stdio.h>

int main()
{
    printf("Programe to count from 10 to 1 in reverse order\n");
    int a = 10;
    do
    {
        printf("%d\n", a);
        a--;
    } while (a >= 1);

    return 0;
}