#include "holberton.h"
/**
 *_strlen - function that prints length of string
 *
 *@s: string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 *print_rev - function that prints a string in reverse
 *
 *@s: string
 *
 * Return: Success
 */

void print_rev(char *s)
{
	int len, i;

	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
