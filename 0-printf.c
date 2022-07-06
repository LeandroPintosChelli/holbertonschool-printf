#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
int _printf(const char *format, ...)
{
	va_list all;
	unsigned int i, n;
	char *s;

	va_start(all, i);

	for (n = 0; n < i; n++)
	{
		s = va_arg(all, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (format != NULL && i < n -1)
			printf("%s", format);
	}
	va_end(all);
	printf("\n");
}

/**int _printf(const char *format, ...)
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
}*/
