#include "holberton.h"
/**
 *rot13 - function that encodes a string to rot13
 *@s: string
 *Return: string s
 */
char *rot13(char *s)
{
	char AZaz[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; AZaz[j] != '\0'; j++)
		{
			if (s[i] == AZaz[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
