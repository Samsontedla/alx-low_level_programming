#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - function that prints numbers
 *@separator: the string to be printed between number
 *@n: number of integers passed to the function
 *Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i == (n - 1))
			break;
		printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
