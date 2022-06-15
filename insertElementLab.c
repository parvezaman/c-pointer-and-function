#include <stdio.h>
void insert(int *arr, int n, int position, int value)
{
    for (int i = n - 2; i >= position; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position] = value;
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6};
    int position, value;
    scanf("%d %d", &position, &value);
    insert(arr, 7, position, value);
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}