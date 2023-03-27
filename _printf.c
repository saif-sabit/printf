#include "main.h"
#include <stdarg.h>
/**
 * _printf - prints anything
 * @format: string to be printed
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	Prints prints[] = {{"c", print_char}, {"s", print_lower_s_string}, {"d", print_int}, {"i", print_int}, {"%", print_percent}, {"o", print_octal}, {"x", print_lower_x_hex}, {"X", print_capital_x_hex}, {"b", print_binary}, {"S", print_capital_s_string}, {"p", print_pointer}, {"R", print_rot13}, {"u", print_unsigned}, {NULL, NULL}};
	int i = 0, j = 0, count = 0;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			while (prints[j].c)
			{
				if (format[i + 1] == *prints[j].c)
				{
					count += prints[j].f(args);
					i++;
					break;
				}
				// else
				// {
				// 	_putchar(format[i]);
				// 	count++;
				// 	break;
				// }
				j++;
			}
			if (prints[j].c == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					count++;
				}
				return (-1);
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
