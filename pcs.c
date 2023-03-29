#include "main.h"

/**
 * pcs - prints a string with non-printable characters
 * @str: list of arguments
 * Return: number of characters printed
 */

int pcs(char *str)
{

	int i, j, k;
	int count = 0;
	char *hex = "0123456789abcdef";

	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			_putchar(str[i]);
			count++;
		}
		else
		{
			_putchar('\\');
			_putchar('0');
			_putchar('x');
			_putchar('A');
			count += 2;
			for (j = 0; j < 16; j++)
			{
				if (str[i] == hex[j])
				{
					_putchar(hex[j]);
					count++;
					break;
				}
			}
			for (k = 0; k < 16; k++)
			{
				if (str[i + 1] == hex[k])
				{
					_putchar(hex[k]);
					count++;
					break;
				}
			}
		}
	}
	return (count);

}
