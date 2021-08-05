#include "main.h"
/**
 *clear_bit - function that sets the value of a bit to 0 at a given index
 *@n: given integer value
 *@index: is the index, starting from 0 of the bit you want to seti
 *Return: 1 in success or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

