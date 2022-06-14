// not solved yet
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

char stringCopier(char *intake, char *output)
{
    int length = getLength(intake);
    printf("intake: %s, length: %d", *intake, length);
    for (int i = 0; i < length; i++)
    {
        output[i] = intake[i];
    }
    output[length] = '\0';
    printf("in function: %s\n", *output);
    return *output;
}
int main()
{
    char intake[100];
    gets(intake);
    int length = getLength(intake);
    char output[length];
    printf("length: %d\n", length);
    stringCopier(intake, output);
    printf("original string: %s\nCopied string: %s", intake, output);
}