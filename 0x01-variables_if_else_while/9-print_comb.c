#include <stdio.h>
/*
 *main - Entry point
 *
 *return: Always 0 (Success)
 */
int main(void)
{
int n = 0;
while (n < 10)
{
	putchar(n % 10 + '0');
	n++;
	if (n < 10)
		putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
