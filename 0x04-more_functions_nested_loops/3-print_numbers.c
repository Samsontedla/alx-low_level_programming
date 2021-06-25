#include "holberton.h"
/**
 * print_numbers - function that prints form 1 - 9
 *
 * Return: 0
 */
void print_numbers(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
