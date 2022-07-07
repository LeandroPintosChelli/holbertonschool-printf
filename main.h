#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
typedef struct op
{
	char op;
	int (*f)(va_list all);
} op_t;
int pr_str(va_list);
int pr_char(va_list);
int _printf(const char *format, ...);
int _putchar(char c);
#endif
