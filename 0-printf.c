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
		leng = strlen(format);
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(all, char));
					break;
				case 's':
					printf("%s", va_arg(all, char));
					break;
				case '%':
					printf("%%", va_arg(all, char));
					break;
			}
			i++;
		}
	}
	va_end(all);
	printf("\n");
}
