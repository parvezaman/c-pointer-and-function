#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("value -> %d address -> %d\n", arr, &arr);
    printf("value -> %d address -> %d\n", *arr, &arr);
    printf("value -> %d address -> %d\n", arr[0], &arr);

    /*
    value -> -251659760 address -> -251659760
    value -> 1 address -> -251659760
    value -> 1 address -> -251659760
    */

    printf("%d %d %d\n", *arr, *(arr + 1), *(arr + 2));
    printf("%d %d %d\n", arr[0], arr[1], arr[2]);
    printf("%d %d %d\n", 0 [arr], 1 [arr], 2 [arr]);
    // 1 2 3
    // 1 2 3
    // 1 2 3

    // printing arr using loop and pointer arithmatics
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(arr + i));
    }
    // 1 2 3 4 5

    printf("\n\n");
    // print arr values using pointer incremental arithmatics
    int *p = arr;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *p);
        p++;
    }
    // 1 2 3 4 5
    return 0;
}