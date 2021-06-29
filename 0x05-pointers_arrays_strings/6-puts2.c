#include "holberton.h"
/**
 *_strlen - function that counts the string charachters
 *
 *@str: a string
 *
 * Return: string count
 */
int _strlen(char *str)
{
	int count;

	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/**
 * puts2 - function that prints the strings places in even arrays
 *
 * @str: string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int len;
	int i = 0;

	len = _strlen(str);

	while (i < len)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
