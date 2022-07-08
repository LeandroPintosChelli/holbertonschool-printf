#include "main.h"
/**
* pr_str - print string
* @all: variadic list
* Return: 1
*/
int pr_str(va_list all)
{
	int cont;
	char *string, array[] = "(null)";

	string = va_arg(all, char *);
	if (string == NULL)
	{
		for (cont = 0; array[cont]; cont++)
		{
			_putchar(array[cont]);
		}
		return (cont);
	}
	else
	{
		for (cont = 0; string[cont]; cont++)
		{
			_putchar(string[cont]);
		}
	}
		return (cont);
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
/**
* pr_int - print decimal
* @all: variadic list
*
*/
int pr_int(va_list all)
{
	_putchar(va_arg(all, int));
	return(1);
}
