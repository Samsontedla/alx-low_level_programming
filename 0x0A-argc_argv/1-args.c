#include "holberton.h"
#include <stdio.h>
/**
 * main - function that counts number of arguments
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 in success
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	putchar((argc - 1) + '0');
	putchar('\n');
	return (0);
}
