#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct format - Structure for printing various types
 *
 * @type: Type to be printed
 * @func: Function to be printed
 */

typedef struct print
{
	char *type;
	int (*f)(va_list);
} print_t;

int (*get_func(const char *format))(va_list);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
