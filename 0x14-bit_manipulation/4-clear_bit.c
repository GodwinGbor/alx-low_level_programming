#include "main.h"

/**
 * clear_bit - how to set the value of a bit to 0
 * @n: The pointer to the number to be changed
 * @index: bit index to be cleared
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
