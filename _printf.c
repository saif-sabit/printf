#include "main.h"
/**
 * _printf - prints anything
 * @fmt: string to be printed
 * Return: number of characters printed
 */

int _printf(const char *fmt, ...)
{
	int i = 0, j = 0, count = 0;

	va_start(va_list args, fmt);

	while (fmt && fmt[i])
	{
		if (fmt[i] == '%')
		{
			j = 0;
			while (prints[j].fmt)
			{
				if (fmt[i + 1] == *prints[j].fmt)
				{
					count += prints[j].f(args);
					i++;
					break;
				}
				j++;
			}
			if (prints[j].fmt == NULL && fmt[i + 1] != ' ')
			{
				if (fmt[i + 1] != '\0')
				{
					_putchar(fmt[i]);
					count++;
				}
				else
					return (-1);
			}
		}
		else
		{
			_putchar(fmt[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
