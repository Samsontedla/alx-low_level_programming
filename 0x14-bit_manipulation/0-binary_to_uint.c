#include "main.h"
#include <stddef.h>
/**
 *binary_to_uint - function that converts a binary number to an unsigned int
 *@b: is pointing to a string of 0 and 1 chars
 *Return: the converted number, or 0 if
 *        there is one or more chars in the string b that is not 0 or 1
 *        b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int int_value = 0, mul = 1;

	if (b == NULL)
		return (0);

	while (b[len])
	{
		len++;
	}
	for (len = len - 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		int_value = int_value + ((b[len] - '0') * mul);
		mul = mul * 2;
	}
	return (int_value);
}
