#include "main.h"

/**
 * pint - prints an integer
 * @i: list of arguments
 * Return: number of characters printed
 */

int pint(int  i)
{
	int j = 0, k = 0, count = 0;
	char *s;

	if (i < 0)
	{
		_putchar('-');
		i *= -1;
		count++;
	}
	s = malloc(sizeof(char) * 12);
	if (s == NULL)
		return (-1);
	while (i > 0)
	{
		s[j] = (i % 10) + '0';
		i /= 10;
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
