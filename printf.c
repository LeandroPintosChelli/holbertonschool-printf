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
		{"%", printper},
		{'\0', NULL}
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
		if (format[i] == '%' && (format[i + 1] == 0 || format[i + 1] == '%'))
		{
			_putchar('%');
			i++;
			counter++;
		}
		else if (format[i] == '%')
		{
			i++;
			while (j < 3) /**chequea las posc de la estr y recorre*/
			{
				if (*ops[j].op == format[i + 1])
				{
					i++;
					counter += ops[j].f(all);
					break;
				}
				i++;
			}
			if (j == 3)
			{
				_putchar(format[i]);
				counter++;
			}	
			i++;	
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
