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
	char *fmt;
	int (*f)(va_list);
} Prints;



int _printf(const char *format, ...);
int _putchar(char c);

int print_binary(va_list args);
int print_capital_s_string(va_list args);
int print_capital_x_hex(va_list args);
int print_char(va_list args);
int print_int(va_list args);
int print_lower_s_string(va_list args);
int print_lower_x_hex(va_list args);
int print_octal(va_list args);
int print_percent(va_list args);
int print_pointer(va_list args);
int print_rot13(va_list args);
int print_unsigned(va_list args);

#endif
