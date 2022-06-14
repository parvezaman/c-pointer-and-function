#include <stdio.h>
int get_max(int a, int b)
{
    int max;
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    return max;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int max = get_max(a, b);
    printf("max is %d", max);
    return 0;
}