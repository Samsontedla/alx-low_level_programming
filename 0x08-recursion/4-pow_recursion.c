#include "holberton.h"
/**
 * _pow_recursion - function calculates x raised to the power of y
 *@x: integer
 *@y: integer
 *Return: 1 if y is 0, -1 if y < 1 else x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (1);
}
