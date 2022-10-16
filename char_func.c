#include "main.h"

/**
 * print_char - Prints a character
 *
 * @args: Argument to be passed
 *
 * Return: A character
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}


/**
 * print_str - Prints a string
 *
 * @args: Arguments to be passed
 * 
 * Return: A string
 */

int print_str(va_list args)
{
	int  j;
	char *str= va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j]; j++)
	{
		_putchar(str[j]);
	}
	return (j);
}
