// programe to reverse the array

#include <stdio.h>

int main()
{
    int noEle;
    int arr[noEle];
    int newArr[noEle];
    printf("This is a simple peograme to reverse the array \n");
    printf("Enter the number of element in the array : ");
    scanf("%d", &noEle);
    for (int i = 0; i < noEle; i++)
    {
        printf("Enter %d velue in the array : ", i + 1);
        int temp;
        scanf("%d", &temp);
        arr[i] = temp;
    }

    for (int i = 0; i < noEle; i++)
    {
        newArr[i] = arr[noEle - 1 - i];
    }

    for (int i = 0; i < noEle; i++)
    {
        int temp = newArr[i];
        printf("%d ", i);
        printf("%d , ", temp);
    }

    return 0;
}