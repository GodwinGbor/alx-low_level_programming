#include "main.h"

/**
 * clear_bit - how to set a value of a certain given bit to 0
 * @n: From the pointer to the number to be changed
 * @index: Whats is the index of the bit to be cleard
 *
 * Return: If 1 for success, then -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
