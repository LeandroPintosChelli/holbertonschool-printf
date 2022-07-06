#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...)
{
	va_list all;
	int i = 0;

	va_start(all, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(all, int));
					break;
				case 's':
					printf("%d", va_arg(all, int));
					break;
				case '%':
					printf("%%");
					break;
			}
			i++;
		}
	}
	va_end(all);
	printf("\n");
}
