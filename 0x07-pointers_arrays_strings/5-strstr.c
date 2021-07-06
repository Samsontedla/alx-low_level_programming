#include "holberton.h"
/**
 *_strstr - function finds the first occurrence of the substring
 *@haystack: string
 *@needle: substring
 *Return: beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0 ; haystack[j] != '\0'; j++)
		{
			if  (needle[i] == haystack[j])
			{
				return (haystack + j);
			}
		}
	}
	return ('\0');
}
