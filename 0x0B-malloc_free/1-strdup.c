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
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0' ; i++)
	{
		s[i] = str[i];
	}
	s[len] = '\0';
	return (s);
}
