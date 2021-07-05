#include "holberton.h"
/**
 *
 *
 *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char sum;

	if (*r < size_r)
	{
		sum = *n1 + *n2;
		return (char *sum);
	}
	else
	return (0);
}
