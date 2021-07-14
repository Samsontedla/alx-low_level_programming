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
	int argc, byte, size, i = 0;
	char *argv;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (argc = 0; argc < ac; argc++)
	{
		for (byte = 0; av[argc][byte]; byte++)
			size++;
	}

	argv = malloc(sizeof(char) * size + 1);

	if (argv == NULL)
	{
		return (NULL);
	}

	for (argc = 0; argc < ac; argc++)
	{
		for (byte = 0; av[argc][byte]; byte++)
		{
			argv[i++] = av[argc][byte];
		}
		argv[i++] = '\n';
	}
	argv[size] = '\0';

	return (argv);
}
