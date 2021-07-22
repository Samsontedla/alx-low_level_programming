#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct printer - struct type defining a printer
 * @s: character representing a data type
 * @print: A function pointer to a function that prints
 *         a data type corresponding to character
 */
typedef struct printer
{
	char *s;
	void (*print)(va_list arg);
} printer_t;
#endif /* VARIADIC_FUNCTIONS_H */
