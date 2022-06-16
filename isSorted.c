#include <stdio.h>
#include <stdbool.h>
void sort(int *arr, int n)
{
    for (int position = 0; position < n - 1; position++)
    {
        for (int check = position + 1; check < n; check++)
        {
            if (arr[check] < arr[position])
            {
                int temp = arr[check];
                arr[check] = arr[position];
                arr[position] = temp;
            }
        }
    }
}
void arrayCopier(int *arr, int *copiedArray, int n)
{
    for (int i = 0; i < n; i++)
    {
        copiedArray[i] = arr[i];
    }
}
bool is_sorted(int *arr, int n)
{
    int copiedArray[n];
    arrayCopier(arr, copiedArray, n);
    sort(copiedArray, n);
    for (int i = 0; i < n; i++)
    {
        if (copiedArray[i] != arr[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[6] = {5, 91, 55, 156, 4, 34};
    bool ans = is_sorted(arr, 6);
    if (ans)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}