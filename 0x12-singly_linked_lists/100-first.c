#include <stdio.h>
/**
 *beforemain - function that executes before main
 * Return: Nothing
 */
void beforemain(void) __attribute__ ((constructor));
void beforemain(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
