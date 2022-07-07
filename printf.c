#include "main.h"
/**
* _printf - printf
* @format: print
* Return: a
*/
int _printf(const char *format, ...)
{
	op_t ops[] = {
		{"c", pr_char},
		{"s", pr_str},
		{"%", printper}
	};
	int i;
	int j;
	int counter = 0;
	va_list all;

	if (format == NULL)
		return (-1);

	va_start(all, format);
	while (format[i]) /**condicion mientras haya algo en format(recorre)*/
	{
		if (format[i] == '%' && (format[i + 1] == 0 || format[i + 1] == '%'))
		{
			_putchar('%');
			i++;
			counter++;
		}
		else if (format[i] == '%')
		{
			j = 0;
			while (j < 3) /**chequea las posc de la estr y recorre*/
			{
				if (*ops[j].op == format[i + 1])
				{
					counter += ops[j].f(all);
					i++;
					break;
				}
				j++;
			}
			if (j == 3)
			{
				_putchar(format[i]);
				counter++;
			}
		}
		else
		{
			_putchar(format[i]);
			counter++;
		}
	}
	va_end(all);
	return (counter);
}
