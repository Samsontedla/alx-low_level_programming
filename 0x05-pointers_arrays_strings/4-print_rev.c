#include "holberton.h"
/**
 *print_rev - function that prints a string in reverse
 *
 *@s: string
 *
 * Return: Success
 */
void print_rev(char *s)
{
	int i, len = 68;

	/**
	 * while (*s != '\0')
	{
		len++;
		s++;
	}
	*/
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
