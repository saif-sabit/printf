#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int len, len2;

	len = _printf("%p\n", NULL);
	// printf("len: %d\n", len);

	len2 = printf("%p\n", NULL);
	// printf("len2: %d\n", len2);


	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
