#include"main.h"
/**
 * _putchar- prints a character to the stdout
 * _puts-Prints a string to the stdout
 * print_char-Prints both a character and a percent specifier
 * @args: va_list arguments
 * Return: Number of characters printed
*/
int _putchar(char c)
{
    write(1, &c, 1);
    return (1);
}
int _puts(va_list args)
{
    char *str = va_arg(args, char *);
    int len = 0;
    int i = 0;

    if (str == NULL)
    {
        str = "(null)";
        len = _strlen(str);
        for (; i < len; i++)
        {
            _putchar(str[i]);
        }
        return (len);
    }
    else
    {
        len = _strlen(str);
        for (; i < len; i++)
        {
            _putchar(str[i]);
        }
    }
    return (len);
}
