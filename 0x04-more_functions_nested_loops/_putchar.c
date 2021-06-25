#include <unistd.h>
/**
 * _putchar - writes the char c to output
 *
 * @c: any character
 *
 * Retrun: On success 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
