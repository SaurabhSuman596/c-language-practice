// programe tofind the largest in n number;

#include <stdio.h>

int main()
{
    int noEle;
    int allNo[noEle];
    printf("Programe to find the largest number \n");
    printf("Enter the no of element you want to enter : ");
    scanf("%d", noEle);
    for (int i = 0; i < noEle; i++)
    {
        printf("Enter %dst no : ");
        int temp;
        scanf("%d", &temp);
        allNo[i] = temp;
    }

    for (int i = 0; i < noEle; i++)
    {
        for (int j = 1; j < noEle; j++)
        {
            if (allNo[i] < allNo[j])
            {
                int temp = allNo[i];
                allNo[i] = allNo[j];
                allNo[j] = allNo[i];
            }
        }
    }

    return 0;
}