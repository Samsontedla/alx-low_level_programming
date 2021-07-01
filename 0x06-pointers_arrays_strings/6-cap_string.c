#include "holberton.h"
/**
 *cap_string - function that capitalizes first letter of every word
 *@s: string
 *Return: capitalized string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && (s[i] >= 97 && s[i] <= 122))
			s[i] = s[i] - 32;
		if (s[i] == '\t' && (s[i + 1] >= 97 && s[i + 1] <= 122))
			s[i + 1] = s[i + 1] - 32;
		if (s[i] == ' ' && (s[i + 1] >= 97 && s[i + 1] <= 122))
			s[i + 1] = s[i + 1] - 32;
		if (s[i] == '.' && (s[i + 1] >= 97 && s[i + 1] <= 122))
			s[i + 1] = s[i + 1] - 32;
		if (s[i] == '\n' && (s[i + 1] >= 97 && s[i + 1] <= 122))
			s[i + 1] = s[i + 1] - 32;
		if (s[i] == ',' && (s[i + 1] >= 97 && s[i + 1] <= 122))
			s[i + 1] = s[i + 1] - 32;
		if (s[i] == ';' && (s[i + 1] >= 97 && s[i + 1] <= 122))
			s[i + 1] = s[i + 1] - 32;
		if (s[i] == '(' && (s[i + 1] >= 97 && s[i + 1] <= 122))
			s[i + 1] = s[i + 1] - 32;
		if (s[i] == ')' && (s[i + 1] >= 97 && s[i + 1] <= 122))
			s[i + 1] = s[i + 1] - 32;
		if (s[i] == '{' && (s[i + 1] >= 97 && s[i + 1] <= 122))
			s[i + 1] = s[i + 1] - 32;
		if (s[i] == '}' && (s[i + 1] >= 97 && s[i + 1] <= 122))
			s[i + 1] = s[i + 1] - 32;
		if (s[i] == '!' && (s[i + 1] >= 97 && s[i + 1] <= 122))
			s[i + 1] = s[i + 1] - 32;
		if (s[i] == '"' && (s[i + 1] >= 97 && s[i + 1] <= 122))
			s[i + 1] = s[i + 1] - 32;
		if (s[i] == '?' && (s[i + 1] >= 97 && s[i + 1] <= 122))
			s[i + 1] = s[i + 1] - 32;
	}
	return (s);
}
