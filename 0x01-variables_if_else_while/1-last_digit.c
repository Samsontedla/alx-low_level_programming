#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 *return: Always 0 (success)
 *
 */

int main(void)
{
	int n, ld;
	
	srand(time(0));	
	
	n = rand() - RAND_MAX / 2;
	
	ld = n % 10;

	printf ("Last digit of ");
	printf ("%d ", n);
	printf ("is ");
	printf ("%d ", ld);

	if (ld > 5)
	{
		printf ("and is greater than 5");
	}
	if (ld == 0)
	{
		printf ("and is 0");
	}
	if (ld < 6 && ld != 0)
	{
		printf ("and is less than 6 not 0\n");
	}
	return (0);
}
