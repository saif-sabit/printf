#include "main.h"

/**
 * check - checks if the next character is a valid specifier
 * @current_char_format: current character format[i]
 * @next_char_format: next character format[i + 1]
 * Return: 1 if valid, -1 if not
 */

int check(const char *current_char_format, const char *next_char_format)
{
	int x = -1;

	if ((*next_char_format) != '\0')
	{
		_putchar((*current_char_format));
		x = 1;
	}

	return (x);
}
