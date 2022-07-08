#include "main.h"
/**
* _printf - printf
* @format: print
* Return: a
*/
int _printf(const char *format, ...)
{
	int i = 0;
	int counter = 0;
	va_list all;

	if (format == NULL)
		return (-1);

	va_start(all, format);
	while (format[i]) /**condicion mientras haya algo en format(recorre)*/
	{
		if (format[i] == '%' && format[i + 1] == 0)
		{
			return (-1);
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] != '%')
				counter += _while(all, format[i + 1]);
			else
				counter += _putchar('%');
			i++;
		}
		else
		{
			_putchar(format[i]);
			counter++;
		}
		i++;
	}
	va_end(all);
	return (counter);
}
/**
* _while - function of pr_precent
* @all: va_list
* @form: store format
* Return: amount of prints
*/
int _while(va_list all, char form)
{
	op_t ops[] = {
		{"c", pr_char},
		{"s", pr_str},
		{"d", pr_inte},
		{"i", pr_int}
	};
	int j = 0;

	while (j < 2) /**chequea las posc de la estr y recorre*/
	{
		if (*ops[j].op == form)
		{
			return (ops[j].f(all));
		}
		j++;
	}
	_putchar('%');
	_putchar(form);
	return (2);
}
