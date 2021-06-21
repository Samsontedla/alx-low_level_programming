#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char D;
for (D = '0' ; D <= '9' ; D++)
	putchar(D);
for (D = 'a' ; D <= 'f' ; D++)
	putchar(D);
putchar('\n');
	return (0);
}
