#include "main.h"

/**
 * pls - prints a string
 * @s: list of arguments
 * Return: number of characters printed
 */

int pls(char *s)
{
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
