#include <stdio.h>
/*
 *Print out alphabet with out q and e
 *
 *
 */

/*betty style doc for function main goes there*/
int main(void)
{
char ch;
do {
	for (ch = 'a'; ch <= 'z' ; ch++)
	putchar(ch);
} while(ch!='e');
putchar('\n');
return (0);
}
