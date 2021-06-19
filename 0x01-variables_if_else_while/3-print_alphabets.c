#include <stdio.h>
/**
 *
 * This is a program that prints out the alphabet
 *
 */

/*betty style doc for functions main goes here*/
int main(void)
{
char ch, CH;
for (ch = 'a' ; ch <= 'z' ; ch++)
	putchar (ch);
for (CH = 'A' ; CH <= 'Z' ; CH++)
	putchar (CH);
putchar ('\n');
	return (0);
}
