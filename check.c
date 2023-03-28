#include "main.h"
/**
 * check - checks if the next character is a valid specifier
 * @c0: current character
 * @c1: next character
 * Return: 1 if valid, -1 if not
 */

int check(const char *c0, const char *c1)
{
	int x = -1;

	if ((*c1) != '\0')
	{
		_putchar((*c0));
		x = 1;
	}

	return (x);
}
