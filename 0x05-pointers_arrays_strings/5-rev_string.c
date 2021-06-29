#include "holberton.h"
/**
 *_strlen - function that counts length of a string
 *
 *@s: string
 *
 * Return: count of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
/**
 *rev_string - function that reverses a string
 *
 * @s: string
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len;
	int i;
	char r;

	len = _strlen(s) - 1;
	i = 0;

	while (i <= len)
	{
		r = s[i];
		s[i] = s[len];
		s[len--] = r;
		i++;
	}
}
