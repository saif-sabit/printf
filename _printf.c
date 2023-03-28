#include "main.h"
/**
 * _printf - prints anything
 * @format: string to be printed
 * Return: number of characters printed
 */


int _printf(const char *format, ...)
{
Prints prints[] = {{"c", pc}, {"s", pls}, {"S", pcs}, {"x", plxh},
	{"d", pint}, {"i", pint}, {"%", pp}, {"u", pu}, {"o", po},
	{"X", pcxh}, {"b", pb}, {"p", ptr}, {"R", pr}, {NULL, NULL}};
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
				j++;
			}
			if (prints[j].c == NULL && format[i + 1] != ' ')
			{
				count += check(&format[i], &format[i + 1]);
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
