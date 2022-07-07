#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int _printf(const char *format, ...);
int _putchar(char c);
int pr_str(va_list all);
int pr_char(va_list all);
typedef struct op
{
	char op;
	int (*f)(va_list all);
} op_t;
#endif
