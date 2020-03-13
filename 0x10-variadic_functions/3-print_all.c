#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - print chars
 * @v: list initializated
 */
void print_char(va_list v)
{
	printf("%c", va_arg(v, int));
}

/**
 * print_integer - prints integers
 *  @v: list initializated
 */
void print_integer(va_list v)
{
	printf("%i", va_arg(v, int));
}

/**
 * print_float - print floats
 *  @v: list initializated
 */
void print_float(va_list v)
{
	printf("%f", va_arg(v, double));
}

/**
 *  print_charp - prints strings
 *  @v: list initializated
 */
void print_charp(va_list v)
{
	char *s = va_arg(v, char *);

	if (s)
		printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: string with formats
 */
void print_all(const char * const format, ...)
{
	va_list vlist;
	int i = 0, j = 0;
	t_f ftypes[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_charp},
		{0, NULL}
	};

	va_start(vlist, format);
	while (format[i])
	{
		while (ftypes[j].p)
		{
			if (format[i] == ftypes[j].p)
				ftypes[j].print_arg(vlist);
			j++;
		}
		if (format[i + 1])
			printf(", ");
		j = 0;
		i++;
	}
	printf("\n");
	va_end(vlist);
}
