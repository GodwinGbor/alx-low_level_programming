#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - how to print a sentence before the main
 * function to be executed always
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
