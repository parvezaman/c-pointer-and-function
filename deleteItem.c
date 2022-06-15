#include <stdio.h>
void array_delete(int *arr, int n, int position)
{
    for (int i = position + 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int position;
    scanf("%d", &position);
    array_delete(arr, 7, position);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}