#include "holberton.h"
/**
 * _strlen - funciton to count length of string
 *
 * @str: string
 *
 * return: Count
 */
int _strlen(char *str)
{
	int count;

	while (str[count] != 0)
	{
		count++;
	}
	return (count);
}
/**
 * puts_half - function that prints half of a string
 *
 * @str - string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int len;

	len = _strlen(str);
	i = len / 2;
	
	if (len % 2 != 0)
	{
		i = (len - 1) / 2;
	}

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
