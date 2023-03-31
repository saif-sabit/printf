#include "main.h"
/**
 * prev - print reverse string
 * @s: char type string
 * Returns nothing
 */
int _prev(char *s)
{
	size_t count,pc;
	count = 0;
	if (s == NULL)
	{
		return (0);
	}
	while (s[count] != '\0')
	{
		count++;
	}
	pc = count;
	while (count > 0)
	{
		_putchar(s[count - 1]);
		count--;
	}
	return (pc);

}
