#include "main.h"
/**
 * _printf - prints anything
 * @format: string to be printed
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	if (format == NULL)
	{
		return _putchar('\0');
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
					unsigned long int d = va_arg(args, unsigned long int);

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
					_putchar('%');
					_putchar(format[i + 1]);
					count += 2;
					break;
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
