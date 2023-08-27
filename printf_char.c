#include"main.h"
/**
 * printf_char-Prints a character
 * @args: The va_list argument
 * Return: The number of characters printed
*/
int printf_char(va_list args)
{
    char c;

    c = va_arg(args, int);
    _putchar(c);
    return (1);
}