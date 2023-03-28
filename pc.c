#include "main.h"

/**
 * pc - prints a character
 * @args: list of arguments
 * Return: number of characters printed
 */

int pc(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
