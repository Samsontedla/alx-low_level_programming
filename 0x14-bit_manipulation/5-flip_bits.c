#include "main.h"
/**
 *flip_bits - function that returns the number of bits
 *            you would need to flip to get from one number to another
 *@n: given first integer
 *@m: given second integer
 *Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int last_bit_n;
	int last_bit_m;

	while (n || m)
	{
		last_bit_n = n & 1;
		last_bit_m = m & 1;

		if (last_bit_n != last_bit_m)
			count++;

		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
