#include "holberton.h"
/**
 *_strlen - functions that counts length of a string
 *@s: string
 *Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 *_strcat - fuction that concatenates two string
 *@dest: destination string
 *@src: source string
 *Return: destination
 */
char *_strcat(char *dest, char *src)
{
	int i, /*len_s;*/

	len_d = _strlen(dest);

	for (i = 0; src[i] != '\0'; ++i, ++len_d)
	{
		dest[len_d] = src[i];
	}
	return (dest);
}
