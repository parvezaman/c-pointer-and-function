#include <stdio.h>
void ultra_sum(int *a, int *b)
{
    int numA = *a;
    int numB = *b;
    *a = numA + numB;
    *b = numA * numB;
}
int main()
{
    int a, b;
    int sum, multiplied;
    scanf("%d %d", &a, &b);
    ultra_sum(&a, &b);
    printf("sum = %d\nmultiplied = %d\n", a, b);
    return 0;
}