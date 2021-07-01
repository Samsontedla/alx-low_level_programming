#include "holberton.h"
/**
 *reverse_array - function that reverses and array of integers
 *@a: integer array
 *@n: number of elements
 *Return: nothting
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end;
	int tmp;
 
	end = n - 1;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}
}
