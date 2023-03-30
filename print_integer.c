#include "main.h"

/**
 * print_integer - prints an integer
 * @i: list of arguments
 * Return: number of characters printed
 */

int print_integer(int i) 
{
    int m, d;
	unsigned int count;
	int np =0;

	if (i < 0)
	{
        char c ='-';
		write(1,&c,1);
		np++;
		if (i == -2147483648){
			write(1,"2147483648",10);
			return 11;
		}
		m = i * -1;
	}
	else
	{
		m = i;
	}
	d = m; 
	count = 1;
	while (d > 9)
	{
		d /= 10; 
		count *= 10; 
	}
	for (; count >= 1; count /= 10)
	{
        char ch = ((m / count) % 10) + 48; 
		write(1,&ch,1);
		np++;
	}
	return np++;
}
