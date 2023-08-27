#include"main.h"
/**
 * printf_integer-Prints an integer
 * @args: value to be printed
*/
int printf_integer(va_list args)
{
    int n = va_arg(args, int);
    int last = n % 10, num, digit, exp = 1;
    int i = 1;/*For last digit*/

    n = n / 10;
    num = n;

    if (last < 0)
    {
        _putchar('-');
        num = -num;
        n = -n;
        last = -last;
        i++;/*For the negative sign if there*/
    }
    if (num > 0)
    {
        while (n / 10 != 0)
        {
            exp *= 10;
            num = num / 10;
        }
        num = n;

        while (exp > 0)
        {
            digit = num / exp;
            _putchar(digit + '0');
            num = num - (digit * exp);
            exp /= 10;
            i++;/*Count the character printed as part of the length*/
        }
    }
    _putchar(last + '0');
    return (i);
}


/**
 * printf_dec-Prints a decimal number
 * @args: Variadic list argument
 * Return: Number of characters printed
*/
int printf_dec(va_list args)
{
    int n = va_arg(args, int);
    int num, last = n % 10, exp = 1, digit = 0;
    int len = 1;

    if (last < 0)
    {
        _putchar('-');
        num = -num;
        last = -last;
        n = -n;
        len++;
    }
    if (num > 0)
    {
        while (num / 10 != 0)
        {
            exp *= 10;
            num = num / 10;
        }
        num = n;
        while (exp > 0)
        {
            digit = num / exp;
            _putchar(digit + '0');
            num = num - (digit * exp);
            exp /= 10;
            len++;
        }

    }
    _putchar(last + '0');
    return (len);
}