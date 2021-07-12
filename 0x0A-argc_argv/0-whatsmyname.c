#include "holberton.h"
#include <stdio.h>
/**
 *main - print program name
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 in success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int i;
	char *s = argv[0];

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
	return (0);
}
