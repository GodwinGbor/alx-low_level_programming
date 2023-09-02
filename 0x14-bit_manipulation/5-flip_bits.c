#include "main.h"

/**
 * flip_bits - How to count the number of bits to be changed
 * getting from one number to the other
 * @n: The number one
 * @m: The number two
 *
 * Return: The number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}

	return (count);
}
