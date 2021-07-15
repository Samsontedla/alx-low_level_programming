#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: first n bytes of s2
 * Return: newly allocated space in memory of s1 then s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0, len1 = 0, len2 = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
		len1++;
	}
	for (i = 0; i < n; i++)
	{
		len2++;
	}
	s = malloc(sizeof(char) * (len1 + len2));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] ; i++)
	{
		s[j++] = s1[i];
	}
	for (i = 0; i < n ; i++)
	{
		s[j++] = s2[i];
	}
	return (s);
}
