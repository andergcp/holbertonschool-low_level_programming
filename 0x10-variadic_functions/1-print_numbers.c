#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *
 *
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;

	va_start(vlist, n);

	for(i = 0; i < n; i++)
	{
		if(i != (n - 1) && separator)
			printf("%i%s", va_arg(vlist, int), separator);
		else 
			printf("%i", va_arg(vlist, int));
	}
	printf("\n");
	va_end(vlist);

}
