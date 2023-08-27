#ifndef MAIN_H
#define MAIN_H
#include<limits.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdarg.h>
/**
 * struct format - match conversion specifiers for printf
 * @specifier: Type of char. Pointer to conversion specifier
 * @func_print: pointer to function that handles the conversion specifier
*/
typedef struct format{
    char *specifier;
    int (*func_print)(va_list args);/*Functions to handle the following specifiers: %s,%c, %%,%d,%ld,%i,%b,%u,%o,%x,%X,%s,%S*/
}convert_match;
/*Functions to handle the %c, %s, %% specifiers*/
int _putchar(char c);
int _puts(va_list args);
int _strlen(const char *s);
char *_strrev(char *s);
int printf_char(va_list args);
/*Functions to handle the %d specifiers*/
int printf_dec(va_list args);
int printf_integer(va_list args);
#endif /**MAIN_H*/