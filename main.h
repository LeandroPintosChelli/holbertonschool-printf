#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct op
{
	char op;
	int (*f)(va_list all);
} op_t;
int main();
int pr_str(va_list all);
int pr_char(va_list all);
int _printf(const char *format, ...);
int _putchar(char c);
#endif
