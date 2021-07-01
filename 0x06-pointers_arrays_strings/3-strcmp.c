#include "holberton.h"
/**
 *_strcmp - function that compares two strings
 *@s1: string one
 *@s2: string two
 *Return: 0 if equal and +||-15
 */
int _strcmp(char *s1, char *s2)
{
	int cmp = 0, flag = 0;

	while (s1[cmp] != '\0' && s2[cmp] != '\0')
	{
		if (s1[cmp] != s2[cmp])
		{
			flag = 1;
			break;
		}
		cmp++;
	}
	if (flag == 0 && s1[cmp] == '\0' && s2[cmp] == '\0')
		return (0);
	else if (flag == 1 && s1[cmp] < s2[cmp])
		return (-15);
	else if (flag == 1 && s1[cmp] > s2[cmp])
		return (15);
	else
		return (0);
}
