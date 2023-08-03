#include "main.h"

/**
 * set_bit - how to set the bit at a certain given index to 1
 * @n: From the pointer to the number to be changed
 * @index: What of the index of the bit to set to 1
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
