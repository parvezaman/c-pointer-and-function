#include <stdio.h>
int *sendSumPointer(int *n, int *m)
{
    int *sum = *n + *m;
    // printf("%d\n", sum);

    return *sum;
}
int main()
{
    int n, m, sum;
    scanf("%d", &n);
    scanf("%d", &m);

    int *summution = sendSumPointer(&n, &m);
    printf("%d\n", summution);
    // printf("%d\n", *sum);

    return 0;
}