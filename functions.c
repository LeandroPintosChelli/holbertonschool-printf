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
	_putchar(va_arg(all, int));
	return (1);
}
/**
* pr_char - print char
* @all: variadict list
* Return: 1
*/
int pr_char(va_list all)
{
	_putchar(va_arg(all, int));
	_putchar('s');
	return (1);
}
