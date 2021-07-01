#include "holberton.h"
/**
 *_strncpy - function that copies two strings
 *@dest: destination string
 *@src: source string
 *@n: n strings of source
 *Return: result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;
	char *result = dest;

	for (j = 0; j < n ; j++)

	{
		dest[j] = src[j];
	}
	return (result);
}
