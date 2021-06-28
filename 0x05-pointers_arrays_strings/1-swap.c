#include "holberton.h"
/**
 *swap_int - Function that swaps the value of two integers
 *
 *@a: any integer
 *@b: any other integer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
