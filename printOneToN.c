#include <stdio.h>
#include <stdlib.h>
int *printOntToN(int n)
{
    int *arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    return arr;
}
int main()
{
    int n;
    scanf("%d", &n);
    int *arr = printOntToN(n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}