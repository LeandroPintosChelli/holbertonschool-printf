#include "main.h"
int prin(void)
{
	printf("Hello");
	return (0);
}
/**
* pr_str - print string
* @all: variadic list
* Return: 1
*/
int pr_str(va_list all)
{
	int q;
	char *t, w[] = "(null)";

	t = va_arg(all, char *);
	if (w == NULL)
	{
		for (q = 0; w[q]; q++)
		{
			_putchar(w[q]);
		}
	}
	else
	{
		for (q = 0; t[q]; q++)
		{
			_putchar(t[q]);
		}
	}
		return (q);
}
/**
* pr_char - print char
* @all: variadict list
* Return: 1
*/
int pr_char(va_list all)
{
	_putchar(va_arg(all, int));
	return (1);
}
