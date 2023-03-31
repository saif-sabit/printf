#include "main.h"
#include <stdio.h>
/**
 * _printf - prints anything
 * @format: string to be printed
 * Return: number of characters printed
 */


int _printf(const char *format, ...)
{
	if (format == NULL)
	{
		return (-1);
	}
	else
	{
		int i = 0, count = 0;

		va_list args;

		va_start(args, format);
		while (format && format[i])
		{
			if (format[i] == '%')
			{
				switch (format[i + 1])
				{
				case 'c':
				{
					char c = va_arg(args, int);

					count += print_character(c);
					break;
				}
				case 's':
				{
					char *s = va_arg(args, char *);

					count += print_lowercase_string(s);
					break;
				}
				case 'S':
				{
					char *s = va_arg(args, char *);

					count += print_uppercase_string(s);
					break;
				}
				case 'x':
				{
					unsigned int d = va_arg(args, unsigned int);

					count += prints_lowercase_hex(d);
					break;
				}
				case 'd':
				case 'i':
				{
					int d = va_arg(args, int);

					count += print_integer(d);
					break;
				}
				case '%':
				{
					count += prints_percent_sign();
					break;
				}
				case 'u':
				{
					unsigned int d = va_arg(args, unsigned int);

					count += prints_unsigned_integer(d);
					break;
				}
				case 'o':
				{
					unsigned int d = va_arg(args, unsigned int);

					count += prints_octal_number(d);
					break;
				}
				case 'X':
				{
					unsigned int d = va_arg(args, unsigned int);

					count +=  prints_uppercase_hex(d);
					break;
				}
				case 'b':
				{
					unsigned int d = va_arg(args, unsigned int);

					if (d == 0)
					{
						_putchar('0');
						count++;
						break;
					}

					

					count += prints_binary(d);
					break;
				}
				case 'p':
				{
					char *d = va_arg(args, char *);

					count += prints_pointer(d);
					break;
				}
				case 'R':
				{
					char *s = va_arg(args, char *);

					count += print_string_rot13(s);
					break;
				}
				case 'r':
				{
					char *s = va_arg(args, char *);

					count += _prev(s);
					break;
				}
				default:
				{
					
					if (format[i + 1] == '\0')
						return (count);
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count += 2;
				}
				}
				i++;
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
}
