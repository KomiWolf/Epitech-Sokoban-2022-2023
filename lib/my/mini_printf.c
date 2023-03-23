/*
** EPITECH PROJECT, 2022
** mini_printf
** File description:
** print
*/

#include <stdarg.h>
#include "my.h"

void function(const char *format, va_list list, int i)
{
    i++;
    if (format[i] == 'c')
        my_putchar(va_arg(list, int));
    if (format[i] == 's')
        my_putstr(va_arg(list, char*));
    if (format[i] == 'i' || format[i] == 'd')
        my_put_nbr(va_arg(list, int));
    if (format[i] == '%')
        my_putchar('%');
}

int mini_printf(const char *format, ...)
{
    va_list list;
    int i = 0;
    int res = 0;
    va_start(list, format);

    while (format[i] != '\0') {
        if (format[i] != '%') {
            my_putchar(format[i]);
        }
        if (format[i] == '%') {
            function(format, list, i);
            i++;
        }
        i++;
    }
    va_end(list);
    return res;
}
