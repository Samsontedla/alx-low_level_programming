#include "holberton.h"
/**
 *_sqrt - recursive function to find closest square root
 *@n: given number
 *@i: square root of n recurse by adding 1
 *Return: -1 if error or i
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt(n, (i + 1)));
	}
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *@n: integer number
 *Return: -1 or square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (_sqrt(n, 1));
}
