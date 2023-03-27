#include "../main.h"

/**
 * print_capital_s_string - prints a string with non-printable characters
 * @args: list of arguments
 * Return: number of characters printed
 */

int print_capital_s_string(va_list args)
{
    char *s = va_arg(args, char *);
    int i = 0, count = 0;

    if (s == NULL)
        s = "(null)";
    while (s[i])
    {
        if (s[i] < 32 || s[i] >= 127)
        {
            _putchar((char )"\\");
            count++;
            if (s[i] < 8)
            {
                _putchar((char )"00");
                count += 2;
            }
            else if (s[i] < 32)
            {
                _putchar((char )"0");
                count++;
            }
            count += print_octal(args);
        }
        else
        {
            _putchar(s[i]);
            count++;
        }
        i++;
    }
    return (count);
}