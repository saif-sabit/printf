#include "main.h"
/**
 * print_hex - prints a HEX number
 * @i: list of arguments
 * Return: number of characters printed
 * On error, -1 is returned, and errno is set appropriately.
*/

int print_hex(char *i)
{
	int count = 0;
	char *s = "0123456789abcdef";
	unsigned long int n = (unsigned long int)i;

	if (n / 16)
	{
		count += print_hex((char *)(n / 16));
	}
	_putchar(s[n % 16]);
	count++;
	return (count);
}
