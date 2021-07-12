#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - fucntion that multiplies two numbers
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 in success, 1 if error
 */
int main(int argc, char **argv)
{
	int i;
	int mul = 0;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			mul = atoi(argv[i]) * atoi(argv[i - 1]);
		}
		printf("%d\n", mul);
	}
	else if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
