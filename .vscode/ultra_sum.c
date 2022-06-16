#include <stdio.h>
void ultra_sum(int a, int b, int *sum, int *multiplied)
{
    *sum = a + b;
    *multiplied = a * b;
}
int main()
{
    int a, b;
    int sum, multiplied;
    scanf("%d %d", &a, &b);
    ultra_sum(a, b, &sum, &multiplied);
    printf("sum = %d\nmultiplied = %d\n", sum, multiplied);
    return 0;
}