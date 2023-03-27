#include "main.h"

/**
 * print_binary - prints a binary number
 * @args: list of arguments
 * Return: number of characters printed
 */

int print_binary(va_list args)
{
    unsigned int i = va_arg(args, unsigned int);
    int j = 0, k = 0, count = 0;
    char *s;

    s = malloc(sizeof(char) * 12);
    if (s == NULL)
        return (-1);
    while (i > 0)
    {
        s[j] = (i % 2) + '0';
        i /= 2;
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
