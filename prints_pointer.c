#include "main.h"

/**
 * prints_pointer - prints a pointer
 * @i: list of arguments
 * Return: number of characters printed
 */

int prints_pointer(char *i)
{
	int count = 0;
	char *s = "(nil)";

	if (i == NULL)
	{
		count += _puts(s);
	}
	else
	{
		count += _puts("0x");
		count += print_hex_number(i);
	}
	return (count);
}
