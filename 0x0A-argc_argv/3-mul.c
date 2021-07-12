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
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[2]) * atoi(argv[1]);
		printf("%d\n", mul);
	}
	else if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
