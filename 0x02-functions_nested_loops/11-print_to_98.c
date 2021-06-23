#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - function that prints natural numbers between n and 98
 *
 *@n: any given integer
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 97)
		{
			printf("%d, ", n);
			n--;
		}
		else
			if (n < 99)
			{
			printf("%d, ", n);
			n++;
			}
	}
	if (n == 98)
	{
		printf("98");
	}
	printf("\n");
}
