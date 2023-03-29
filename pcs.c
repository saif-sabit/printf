#include "main.h"

/**
 * pcs - prints a string with non-printable characters
 * @str: list of arguments
 * Return: number of characters printed
 */

int pcs(char *str)
{
	int i = 0;
	int j = 0;
	int count = 0;
	char *hex = "0123456789ABCDEF";

	if (str == NULL)
	{
		return (-1);
	}

	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			j = str[i] / 16;
			_putchar(hex[j]);
			j = str[i] % 16;
			_putchar(hex[j]);
			count += 4;
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
		i++;
	}
	return (count);

}
