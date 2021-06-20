#include <stdio.h>
/**
 *main - Entry point
 *
 *return: Always 0 (success)
 */
int main(void)
{
	int i = 0;
	while (i < 10)
	{
	putchar(i % 10 + '0');
	i++;
	}
	putchar('\n');	
	return (0);
}
