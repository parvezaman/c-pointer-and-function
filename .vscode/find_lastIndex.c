#include <stdio.h>
int strLength(char intake[])
{
    int count = 0, i = 0;
    while (intake[i] != '\0')
    {
        count++;
        i++;
    }
    return i;
}
int find_lastIndex(char intake[], char ch)
{
    int length = strLength(intake), lastIndex = 0, count = 0;
    for (int i = 0; i < length; i++)
    {
        if (intake[i] == ch)
        {
            lastIndex = i;
            count++;
        }
    }
    if (count > 0)
    {
        return lastIndex;
    }
    else
    {
        return -1;
    }
}
int main()
{
    char ch;
    scanf("%c", &ch);
    char intake[100];
    scanf("%s", intake);
    printf("index = %d", find_lastIndex(intake, ch));
    return 0;
}