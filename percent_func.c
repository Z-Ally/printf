#include "main.h"

/**
 * print_pct - Prints the "%" character
 * 
 * @args: va_list as an argument
 *
 * Return: Character "%"
 */

int print_pct(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}
