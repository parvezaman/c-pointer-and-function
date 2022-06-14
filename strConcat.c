#include <stdio.h>
int getLength(char *intake)
{
    int i;
    while (intake[i] != '\0')
    {
        i++;
    }
    return i;
}
void strConcatination(char *a, char *b, char *c)
{
    int i = 0, j = 0;

    while (a[i] != '\0')
    {
        c[i] = a[i];
        i++;
    }
    while (b[j] != '\0')
    {
        c[i] = b[j];
        i++;
        j++;
    }
    c[i] = '\0';
}
int main()
{
    char a[100], b[100];
    gets(a);
    gets(b);
    printf("a = %s, b = %s\n", a, b);
    int length = getLength(a) + getLength(b);
    char c[length];
    strConcatination(a, b, c);
    printf("concatinated string: %s", c);

    return 0;
}