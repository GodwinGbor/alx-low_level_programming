#include "function_pointers.h"
/**
 * int_index - to return index place if comparison = true, else -1
 * @array:  The array
 * @size: The size of elements in array
 * @cmp: The pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]))
			return (b);
	}
	return (-1);
}
