#include <stdio.h>
int get_length(char *intake)
{
    int i = 0;
    while (intake[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char intake[100];
    gets(intake);
    int length = get_length(intake);
    printf("length of the string is: %d\n");
    return 0;
}