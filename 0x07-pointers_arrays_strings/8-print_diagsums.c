#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - function that prints the sum of the two diagonals
 *@a: matrix array
 *@size: size of array
 *return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[((size - 1) * i) + (size - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
