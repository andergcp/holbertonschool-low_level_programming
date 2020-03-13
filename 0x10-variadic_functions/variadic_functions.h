#ifndef VARIADIC_FUNC
#define VARIADIC_FUNC
#include <stdarg.h>

/**
 * struct t - struct of char and function pointer
 * @p: type of data
 * @print_arg: pointer to function
 */
typedef struct t
{
	char p;
	void (*print_arg)(va_list n);
} t_f;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
