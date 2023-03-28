#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H

#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct Prints - struct for print functions
 * @fmt: format
 * @f: function
 */

typedef struct Prints
{
	char *c;
	int (*f)(va_list);
} Prints;



int _printf(const char *format, ...);
int _putchar(char c);
int check(const char *c0, const char *c1);

int pb(va_list args);
int pcs(va_list args);
int pcxh(va_list args);
int pc(va_list args);
int pint(va_list args);
int pls(va_list args);
int plxh(va_list args);
int po(va_list args);
int pp(va_list args);
int ptr(va_list args);
int pr(va_list args);
int pu(va_list args);

#endif
