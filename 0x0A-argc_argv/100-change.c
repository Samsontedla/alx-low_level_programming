#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - fucntion that counts changes
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 in success, 1 if error
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int c, i;

	i = atoi(argv[1]) % 25;

	if (i == 0)
	{
		c = atoi(argv[1]) / 25;
	}
	else if (i != 0)
	{
		if (i % 10 == 0)
		{
			c = (atoi(argv[1]) / 25) + (i / 10);
		}
		else if (i % 10 != 0)
		{
			c = (atoi(argv[1]) / 25) + (i / 10) + ((i % 10) / 2);
			if ((i % 10) % 2 != 0)
			{
			c = (atoi(argv[1]) / 25) + (i / 10) + ((i % 10) / 2) + (((i % 10) % 2) / 1);
			}
		}
	}
	printf("%d\n", c);
	return (0);
}
