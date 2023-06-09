#include "main.h"

/**
 * prints_uppercase_hex - prints the hexadecimal representation of a number
 * @i: list of arguments
 * Return: number of characters printed
 */

int prints_uppercase_hex(unsigned int i)
{
	int j = 0, k = 0, count = 0;
	char *s;

	s = malloc(sizeof(char) * 12);
	if (s == NULL)
		return (-1);
	while (i > 0)
	{
		s[j] = (i % 16) + '0';
		if (s[j] > '9')
			s[j] += 7;
		i /= 16;
		j++;
	}
	for (k = j - 1; k >= 0; k--)
	{
		_putchar(s[k]);
		count++;
	}
	free(s);
	return (count);
}
