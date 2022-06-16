#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("original: %d %d\n", a, b);
    swap(&a, &b);
    printf("swaped: %d %d\n", a, b);

    return 0;
}