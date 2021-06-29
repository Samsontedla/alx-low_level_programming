#include "holberton.h"
#include <stdio.h>
/**
 *print_array - fucntion that prints elemments of integers
 *
 *@n: number of elements of the array to be printed
 *@a: integer pointer
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int len = 0;

	while (len < n)
	{
		printf("%d", a[len]);
		if (len < n - 1)
			printf(", ");
		len++;
	}
	printf("\n");
}
