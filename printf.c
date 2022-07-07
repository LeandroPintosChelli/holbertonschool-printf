#include "main.h"
/**
* _printf - printf
* @format: print
*/
int _printf(const char *format, ...)
{
	op_t ops[] = {
		{'s', pr_str},
		{'c', pr_char},
		{'\n', NULL}
		};
	int i;
	int j = 0;
	int counter = 0;
	va_list all;

	if (format == NULL)
		return (-1);

	va_start(all, format);
	while (format[i]) /**condicion mientras haya algo en format(recorre)*/
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				counter += 1;
			}
			while (ops[j].op) /**chequea las posc de la estr y recorre*/
			{
				if (ops[j].op == format[i + 1])
				{
					counter += ops[j].f(all);
					i += 2;
				}
			}
		}
		else
		{
			_putchar(format[i]);
		}
	}
	va_end(all);
	return (all);
}
