#include "lists.h"

/**
 * add_nodeint - to add a new node at the beginning of the linked list
 * @head: From the pointer to the first node in the list
 * @n: The data to insert in the new node
 *
 * Return: The pointer to the new node, or then NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
