#include"main.h"
int printf_char(va_list args)
{
    char c;

    c = va_arg(args, int);
    _putchar(c);
    return (1);
}