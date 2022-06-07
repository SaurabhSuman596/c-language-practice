/* print this patter

   * * * *
   * * * *
   * * * *
   * * * *
 */

#include <stdio.h>

int main()
{
    for (int a = 4; a >= 1; a--)
    {
        for (int b = 4; b >= 1; b--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}