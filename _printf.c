#include "main.h"
#include <stdarg.h>
/**
 * _printf - prints anything
 * @fmt: string to be printed
 * Return: number of characters printed
 */

int _printf(const char *fmt, ...)
{
	Prints prints[] = {{"c", print_char}, {"s", print_lower_s_string},
	{"d", print_int}, {"i", print_int}, {"%", print_percent},
	{"u", print_unsigned}, {"o", print_octal},
	{"x", print_lower_x_hex}, {"X", print_capital_x_hex},
	{"b", print_binary}, {"S", print_capital_s_string},
	{"p", print_pointer}, {"r", print_rev}, {"R", print_rot13},
	{NULL, NULL}};
	int i = 0, j = 0, count = 0;
	va_list args;

	va_start(args, fmt);

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
