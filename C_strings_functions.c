#include"main.h"
char *_strrev(char *s)
{
    int len = 0;
    int i = 0;
    int n = 0;

    len = _strlen(s);
    n = len - 1;

    for (; i < (len / 2); i++)
    {
        char temp = s[i];
        s[i] = s[n];
        s[n] = temp;
        n--;
    }

}
int _strlen(const char *s)
{
    int i = 0;
    int len = 0;

    while (s[i] != '\0')
    {
        len++;
        i++;
    }
    return (len);

}
