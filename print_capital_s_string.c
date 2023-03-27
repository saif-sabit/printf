#include "main.h"

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
			_putchar(92);
			_putchar(92);
			count++;
			if (s[i] < 8)
			{
				_putchar('0');
				count += 2;
			}
			else if (s[i] < 32)
			{
				_putchar('0');
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
