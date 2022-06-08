// programe tofind the largest in n number;

#include <stdio.h>

int main()
{
    int noEle;

    printf("Programe to find the largest number \n");
    printf("Enter the no of element you want to enter : ");
    scanf("%d", &noEle);
    int allNo[noEle];
    for (int i = 0; i < noEle; i++)
    {
        printf("Enter %d no : ", i + 1);
        int temp;
        scanf("%d", &temp);
        allNo[i] = temp;
    }

    for (int i = 0; i < noEle; i++)
    {
        for (int j = 0; j < noEle; j++)
        {
            if (allNo[i] < allNo[j])
            {
                break;
            }
            else if (allNo[i] >= allNo[j])
            {
                if (j == noEle - 1)
                {
                    printf("%d", allNo[i]);
                }
            }
        }
    }

    return 0;
}