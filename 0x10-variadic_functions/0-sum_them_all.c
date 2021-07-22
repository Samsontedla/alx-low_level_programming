#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - function that returns the sum of all its parameters
 *@n: number of arguments
 *Return: Sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list ap;

	va_start(ap, n);

	for (; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
