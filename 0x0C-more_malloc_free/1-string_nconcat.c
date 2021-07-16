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
	unsigned int i = 0, j = 0,  len1 = 0, len2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else if (n > len2)
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1 ; i++)
		s[i] = s1[i];
	for (; s2[j] && n < len2 && i < (len1 + n); j++)
		s[i++] = s2[j];
	for (; s2[j] && n >= len2 && i < (len1 + len2); j++)
		s[i++] = s2[j];
	s[i] = '\0';
	return (s);
}
