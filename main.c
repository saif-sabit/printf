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

	char m1[] = "Hello\0 %% ";


	int len1 = _printf("%s\n", m1);
	int len2 = printf("%s\n", m1);

	_printf("len1: %d\n", len1);
	printf("len2: %d\n", len2);

	return (0);
}
