#include "lists.h"

/**
 * get_nodeint_at_index - return a node at a certain index in the linked list
 * @head: For the first node in the linked list
 * @index: The index of the node to be returned
 *
 * Return: The pointer to the node we're looking for, or the NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b = 0;
	listint_t *temp = head;

	while (temp && b < index)
	{
		temp = temp->next;
		b++;
	}

	return (temp ? temp : NULL);
}
