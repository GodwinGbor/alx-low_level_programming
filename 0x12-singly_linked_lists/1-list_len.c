#include <stdlib.h>
#include "lists.h"

/**
 * list_len - the returned of the number of elements in the linked list
 * @h: From pointer to the list_t list
 *
 * Return: The number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		b++;
		h = h->next;
	}
	return (b);
}
