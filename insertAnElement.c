#include <stdio.h>
#include <stdlib.h>
int *insertElement(int *arr, int n)
{
    int x, y;
    printf("at which index do you want to insert an element and what is the element: ");
    scanf("%d %d", &x, &y);
    int *newArr = (int *)malloc((n + 1) * sizeof(int));
    for (int i = 0; i < x; i++)
    {
        newArr[i] = arr[i];
    }
    newArr[x] = y;
    for (int i = x + 1; i < n + 1; i++)
    {
        newArr[i] = arr[i - 1];
    }
    return newArr;
}
int main()
{
    printf("input the size: ");
    int n;
    scanf("%d", &n);
    printf("input elements: ");

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *newArrPointer = insertElement(arr, n);
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", *(newArrPointer + i));
    }

    return 0;
}