#include "main.h"

/**
 * get_endianness - checking if a machine is little or big at the end
 * Return: If 0 for big, then 1 for little
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
