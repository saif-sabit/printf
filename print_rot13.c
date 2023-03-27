#include "main.h"

/**
 * print_rot13 - prints a string in rot13
 * @args: list of arguments
 * Return: number of characters printed
 */

int print_rot13(va_list args)
{
	char *s = va_arg(args, char *);
	int i = 0, j = 0, count = 0;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (s == NULL)
		s = "(null)";
	while (s[i])
	{
		for (j = 0; alpha[j]; j++)
		{
			if (s[i] == alpha[j])
			{
				_putchar(rot13[j]);
				count++;
				break;
			}
		}
		if (alpha[j] == '\0')
		{
			_putchar(s[i]);
			count++;
		}
		i++;
	}
	return (count);
}
