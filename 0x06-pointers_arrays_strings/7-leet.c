#include "holberton.h"
/**
 *leet - function that replaces a string's char in array a by int in array b
 *@s: string
 *Return: string s
 */
char *leet(char *s)
{
	int i, j;
	int a[] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};
	char b[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
				s[i] = b[j];
		}
	}
	return (s);
}
