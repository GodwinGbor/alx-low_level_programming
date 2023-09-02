#include "main.h"

/**
 * set_bit - how to set a bit index to 1
 * @n: From the pointer to the number to be changed
 * @index: The index of a bit to be set to 1
 *
 * Return: If 1 for success, then -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
