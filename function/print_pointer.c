#include "../main.h"

/**
 * print_pointer - prints a pointer
 * @args: list of arguments
 * Return: number of characters printed
 */

int print_pointer(va_list args)
{
    unsigned long int i = va_arg(args, unsigned long int);
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
    _putchar((char)"0x");
    count += 2;
    for (k = j - 1; k >= 0; k--)
    {
        _putchar(s[k]);
        count++;
    }
    free(s);
    return (count);
}