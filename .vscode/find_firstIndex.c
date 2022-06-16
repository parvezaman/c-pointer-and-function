#include <stdio.h>
int strlength(char intake[])
{
    int count = 0, i = 0;
    while (intake[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}
int find_firstIndex(char intake[], char ch)
{
    int length = strlength(intake);
    // printf("length= %d\nstring =%s\nchar = %c\n", length, intake, ch);
    for (int i = 0; i < length; i++)
    {
        if (intake[i] == ch)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    char intake[100];
    char ch, temp;
    scanf("%s", intake);
    scanf("%c", &temp); // why do i have to take the char input first???
    scanf("%c", &ch);   // why do i have to take the char input first???
    /* getc(ch);
    gets(intake); */

    // printf("original: %s %c\n", intake, ch);
    printf("index = %d\n", find_firstIndex(intake, ch));
    return 0;
}