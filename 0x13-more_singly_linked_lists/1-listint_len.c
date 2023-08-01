#include "lists.h"

/**
 * listint_len - How to return the number of elements in the linked lists
 * @h: To linked list of type listint_t to the traverse
 *
 * Return: The numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
