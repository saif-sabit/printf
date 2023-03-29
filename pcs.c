#include "main.h"

/**
 * pcs - prints a string with non-printable characters
 * @str: list of arguments
 * Return: number of characters printed
 */
//Handle the following custom conversion specifier:

int pcs(char *str)
{


	int i, j, k;
	int count = 0;
	char *hex = "0123456789abcdef";
	char *hex2 = "0123456789ABCDEF";

	if (str == NULL)
	{
		return (-1);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar('0');
			_putchar('A');
			count += 2;
			for (j = 0; j < 16; j++)
			{
				if (str[i] == hex[j] || str[i] == hex2[j])
				{
					_putchar(hex[j]);
					count++;
					break;
				}
			}
			for (k = 0; k < 16; k++)
			{
				if (str[i + 1] == hex[k] || str[i + 1] == hex2[k])
				{
					_putchar(hex[k]);
					count++;
					break;
				}
			}
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}

	return (count);
}
