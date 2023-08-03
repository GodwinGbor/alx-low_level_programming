#include "main.h"

/**
 * get_bit - how to return the value of a bit at index in decimal number
 * @n: The number to be searched
 * @index: The index of the bit needed
 *
 * Return: The value of the bit needed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
