#include "holberton.h"
/**
 *
 *
 *
 *
 *
 */
void print_times_table(int n)
{
	int i, j, k;

	if
	{
		for (i = 0; i < n ; i++)
		{
			for (j = 0 ; j < n ; j++)
			k = i * j;
			if (k > 99)
			{
				l = k % 10;
				m = (k - l) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(m + '0');
				_putchar(l + '0');
			}			
			else
			{
			if (j != 0)
			{
				_putchar(',');				
				_putchar(' ');		
				_putchar(' ');
			}		
			_putchar(k + '0');
			}
		}
	_putchar('\n');
	}
}
