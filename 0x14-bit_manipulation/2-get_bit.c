#include "main.h"
/**
 *get_bit - function that returns the value of a bit at a given index
 *@n: given integer value
 *@index: is the index, starting from 0 of the bit you want to get
 *Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if ((n & (n << (index))) == 0)
		return (0);

	return (1);
}
