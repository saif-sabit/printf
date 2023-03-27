#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @args: list of arguments
 * Return: number of characters printed
 */

int print_rev(va_list args)
{
    char *s = va_arg(args, char *);
    int i = 0, count = 0;

    if (s == NULL)
        s = "(null)";
    while (s[i])
        i++;
    for (i = i - 1; i >= 0; i--)
    {
        _putchar(s[i]);
        count++;
    }
    return (count);
}
