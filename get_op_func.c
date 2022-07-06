#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
int (*get_op_func(char *s))(va_list all)
{
	op_t ops[] = {
	{"s", pr_str},
	{"c", pr_char},
	{"%", pr_per},
	{NULL, NULL}
	};

int _printf(const char *format, ...)
{
	int i;
	int j;
	int counter = 0;
	va_list all;

	if (format == NULL)
		return (-1);

	va_start(all, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			while (ops[j].op[0])
			{
				if ((ops[j].op[0]) == (format[i + 1]))
				{
					counter +=
				}
			}
		}
		else
		{
			_putchar
		}
	}


/**	i = 0;
	while (ops[i].pr != NULL)
	{
		if ((ops[i].pr[0]) == (format[i + 1]))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}*/




