#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - The allocates memory that is using malloc
 * @b: The number of the bytes to allocate
 *
 * Return: The pointer is to be allocated to memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
