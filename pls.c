#include "main.h"

/**
 * pls - prints a string
 * @args: list of arguments
 * Return: number of characters printed
 */

int pls(va_list args)
{
	char *s = va_arg(args, char *);
	int i = 0;

	if (s == NULL)
		s = "(null)";
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
