#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings with a separator
 * @separator: pointer to the separator string
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;
	char *s;

	va_start(vlist, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(vlist, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(vlist);
}
