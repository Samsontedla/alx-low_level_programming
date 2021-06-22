#include "holberton.h"
/**
 * print_alphabet - function to print lower case alphabet
 *
 * Return: Does not return anything
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
