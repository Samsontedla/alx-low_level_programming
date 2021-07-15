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
	unsigned int index, len = n;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (index = 0; s1[index]; index++)
	{
		len++;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (index = 0; s1[index] ; index++)
	{
		s[len++] = s1[index];
	}
	for (index = 0; s2[index] && index < n ; index++)
	{
		s[len++] = s2[index];
	}
	s[len] = '\0';
	return (s);
}
