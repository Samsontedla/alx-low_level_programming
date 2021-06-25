#include "holberton.h"
/**
 *print_most_numbers - function that prints 1 - 9 with out 2 & 4
 *
 * return: Success
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if ((n != 2) && (n != 4))
			_putchar(n + '0');
	}
	_putchar('\n');
}
