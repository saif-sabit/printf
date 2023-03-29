#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string to print
 * Return: number of characters printed
 * On error, -1 is returned, and errno is set appropriately.
*/

int _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
