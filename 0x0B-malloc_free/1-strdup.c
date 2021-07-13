#include "holberton.h"
#include <stdlib.h>
/**
 *_strdup - function that returns pointer to duplicated string
 *@str: string input
 *Return: pointer to duplicated string || NULL if error
 */
char *_strdup(char *str)
{
	int i, len;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0' ; i++)
	{
		len++;
	}
	s = malloc(1 * len);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
