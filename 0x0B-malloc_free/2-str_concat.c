#include "holberton.h"
#include <stdlib.h>
/**
 *str_concat - function that concatenates 2 strings
 *@s1: string 1
 *@s2: string 2
 *Return: newly allocated space or NULL if error
 */
char *str_concat(char *s1, char *s2)
{
	int i, j = 0, len = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		len++;
	}
	s = malloc(1 * len);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] ; i++)
	{
		s[j++] = s1[i];
	}
	for (i = 0; s2[i] ; i++)
	{
		s[j++] = s2[i];
	}
	return (s);
}
