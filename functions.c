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
	int cont;
	char *string, array[] = "(null)";

	string = va_arg(all, char *);
	if (array == NULL)
	{
		for (cont = 0; array[cont]; cont++)
		{
			_putchar(array[cont]);
		}
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
	return (0);
}
/**
* printper - print
* @all: va list
*/
int printper(va_list all)
{
	_putchar(va_arg(all, int));
	return(0);
}

