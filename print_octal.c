#include <string.h>
#include "stdlib.h"
#include "main.h"

/**
 * print_octal - prints an octal number
 * @args: list of arguments
 * Return: number of characters printed
 */

int print_octal(va_list args)
{
    unsigned int i = va_arg(args, unsigned int);
    int j = 0, k = 0, count = 0;
    char *s;

    s = malloc(sizeof(char) * 12);
    if (s == NULL)
        return (-1);
    while (i > 0)
    {
        s[j] = (i % 8) + '0';
        i /= 8;
        j++;
    }
    for (k = j - 1; k >= 0; k--)
    {
        _putchar(s[k]);
        count++;
    }
    free(s);
    return (count);
}