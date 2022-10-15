#include "main.h"

/**
 * get_func - Checks for a valid specifier
 *
 * @format: A character to be checked
 *
 * Return: A pointer to the function
 */

int (*get_func(const char *format))(va_list)
{
	int i;

	print_t arr[] = {
		{"d", print_d},
		{"i", print_d},
		{NULL, NULL}
	};

	for (i = 0; arr[i].type; i++)
	{
		if (*format == *(arr[i].type))
		{
			return (arr[i].f);
		}
	}
	return (NULL);
}
