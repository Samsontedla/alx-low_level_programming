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
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
