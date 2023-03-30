#include "main.h"

/**
 * print_lowercase_string - prints a string in lowercase
 * @s: list of arguments
 * Return: number of characters printed
 */

int print_lowercase_string(char *s)
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
