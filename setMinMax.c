#include <stdio.h>
void setMinMax(int *a, int *b)
{
    if (*a > *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    setMinMax(&a, &b);
    printf("minimum is a = %d\nmaximum is b = %d", a, b);
    return 0;
}