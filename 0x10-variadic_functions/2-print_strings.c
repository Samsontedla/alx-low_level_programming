#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - function that prints strings
 *@separator: the string to be printed between the strings
 *@n: the number of strings passed to the function
 *Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *s;
	va_list ap;

	va_start(ap, n);

	for (; i < n; i++)
	{
		s = va_arg(ap, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator == NULL || i == (n - 1))
			break;
		printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
