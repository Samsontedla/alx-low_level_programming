#include "holberton.h"
/**
 *cap_string - function that capitalizes first letter of every word
 *@s: string
 *Return: capitalized string
 */
char *cap_string(char *s)
{
		int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		if (s[i] == '\t' || s[i] == ';' || s[i] == '.' || s[i] == '"')
		{
			i++;

			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		if (s[i] == ' ' || s[i] == '\n')
		{
			++i;

			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		else
			continue;
	}
	return (s);
}
