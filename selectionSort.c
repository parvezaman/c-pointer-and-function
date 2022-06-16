#include <stdio.h>
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
int main()
{
    int arr[6] = {5, 91, 55, 156, 4, 34};
    sort(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}