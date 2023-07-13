#include <stdlib.h>
#include "main.h"

/**
 * *_memset - To fill the memory with a constant byte
 * @s: The memory area to be filled
 * @b: The character to copy
 * @n: The number of times to copy the b
 *
 * Return: The pointer to the memory area of the s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - How to allocates memory for the array
 * @nmemb: The number of the elements needed in the array
 * @size: Th know the size of each element
 *
 * Return: The pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
