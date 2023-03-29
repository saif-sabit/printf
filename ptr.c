#include "main.h"

/**
 * ptr - prints a pointer
 * @i: list of arguments
 * Return: number of characters printed
 */

int ptr(char *i)
{
	int count = 0;
	char *s = "(nil)(nil)";

	if (i == NULL)
	{
		count += _puts(s);
	}
	else
	{
		count += _puts("0x");
		count += print_hex(i);
	}
	return (count);
}
