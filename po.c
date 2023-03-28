#include <string.h>
#include "stdlib.h"
#include "main.h"

/**
 * po - prints an octal number
 * @i: list of arguments
 * Return: number of characters printed
 */

int po(unsigned int i)
{
	int j = 0, k = 0, count = 0;
	char *s;

	s = malloc(sizeof(char) * 12);
	if (s == NULL)
		return (-1);
	while (i > 0)
	{
		s[j] = (i % 8) + '0';
		i /= 8;
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
