#include "holberton.h"
/**
 *print_last_digit - function that print last digit of i
 *
 *@i: any integer input
 *
 * Return: result 'j'
 */
int print_last_digit(int i)
{
int j;
j = (i % 10);
if (j < 0)
{
j = -j;
}
_putchar(j + '0');
return (j);
}
