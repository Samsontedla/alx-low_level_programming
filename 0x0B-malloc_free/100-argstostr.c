#include "holberton.h"
#include <stdlib.h>
/**
 *argstostr - unction that concatenates all the arguments of your program
 *@ac: argument count
 *@av: array of pointers to arguments
 *Return: arguments with new line or NULL in error
 */
char *argstostr(int ac, char **av)
{
	int agc, byte, size, index = 0;
	char *agv;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (agc = 0; agc < ac; agc++)
	{
		for (byte = 0; av[agc][byte]; byte++)
			size++;
	}

	agv = malloc(sizeof(char) * size + 1);

	if (agv == NULL)
	{
		return (NULL);
	}

	for (agc = 0; agc < ac; agc++)
	{
		for (byte = 0; av[agc][byte]; byte++)
		{
			agv[index++] = av[agc][byte];
		}
		agv[index++] = '\n';
	}
	agv[size] = '\0';

	return (agv);
}
