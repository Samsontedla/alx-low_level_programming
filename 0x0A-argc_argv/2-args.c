#include "holberton.h"
#include <stdio.h>
/**
 *main - print arguments with new line
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 in success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int i;
	int j;

	for (j = 0 ; j < argc ; j++)
	{
		char *s = argv[j];

		for (i = 0 ; s[i] != '\0' ; i++)
		{
			putchar(s[i]);
		}
		putchar('\n');
	}
	return (0);
}
