#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H

#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int check(const char *c0, const char *c1);

int pb(unsigned int i);
int pcs(char *s);
int pcxh(unsigned int i);
int pc(char c);
int pint(int i);
int pls(char *s);
int plxh(unsigned int i);
int po(unsigned int i);
int pp(void);
int ptr(char *i);
int pr(char *s);
int pu(unsigned int i);

int _puts(char *str);
int print_hex(char *i);

#endif
