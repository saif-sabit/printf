#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H



#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>



int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);

int print_integer(int d);
int print_character(char c);
int print_uppercase_string(char *s);
int print_lowercase_string(char *s);
int print_string_rot13(char *s);

int prints_binary(unsigned int i);
int prints_uppercase_hex(unsigned int i);
int prints_lowercase_hex(unsigned int i);
int prints_octal_number(unsigned int i);
int prints_percent_sign(void);
int prints_pointer(char *i);
int prints_unsigned_integer(unsigned int i);
int print_hex_number(char *i);
int _prev(char *s);
#endif
