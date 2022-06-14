#include <stdio.h>
int get_min(int a, int b)
{
    int min;
    if (a > b)
    {
        min = b;
    }
    else
    {
        min = a;
    }
    return min;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int min = get_min(a, b);
    printf("min is %d", min);
    return 0;
}