#include "../main.h"

/**
 * print_lower_x_hex - prints a hex number
 * @args: list of arguments
 * Return: number of characters printed
 */

int print_lower_x_hex(va_list args)
{
    unsigned int i = va_arg(args, unsigned int);
    int j = 0, k = 0, count = 0;
    char *s;

    s = malloc(sizeof(char) * 12);
    if (s == NULL)
        return (-1);
    while (i > 0)
    {
        s[j] = (i % 16) + '0';
        if (s[j] > '9')
            s[j] += 39;
        i /= 16;
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