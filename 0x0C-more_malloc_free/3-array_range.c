#include <stdlib.h>
#include "main.h"

/**
 * *array_range - How to creates an array of integers
 * @min: The minimum range of values stored
 * @max: What is the maximum range of values stored and number of elements
 *
 * Return: The pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int b, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (b = 0; min <= max; b++)
		ptr[b] = min++;

	return (ptr);
}
