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

					count += pc(c);
					break;
				}
				case 's':
				{
					char *s = va_arg(args, char *);

					count += pls(s);
					break;
				}
				case 'S':
				{
					char *s = va_arg(args, char *);

					count += pcs(s);
					break;
				}
				case 'x':
				{
					unsigned int d = va_arg(args, unsigned int);

					count += plxh(d);
					break;
				}
				case 'd':
				case 'i':
				{
					int d = va_arg(args, int);

					count += pint(d);
					break;
				}
				case '%':
				{
					count += pp();
					break;
				}
				case 'u':
				{
					unsigned int d = va_arg(args, unsigned int);

					count += pu(d);
					break;
				}
				case 'o':
				{
					unsigned int d = va_arg(args, unsigned int);

					count += po(d);
					break;
				}
				case 'X':
				{
					unsigned int d = va_arg(args, unsigned int);

					count += pcxh(d);
					break;
				}
				case 'b':
				{
					unsigned int d = va_arg(args, unsigned int);

					count += pb(d);
					break;
				}
				case 'p':
				{
					char *d = va_arg(args, char *);

					count += ptr(d);
					break;
				}
				case 'R':
				{
					char *s = va_arg(args, char *);

					count += pr(s);
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
