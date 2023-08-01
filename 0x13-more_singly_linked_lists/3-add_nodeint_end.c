#include "lists.h"

/**
 * add_nodeint_end - to add the node at the end of the linked list
 * @head: From the pointer to the first element in the list
 * @n: The data to insert in a new element
 *
 * Return: The pointer to the new node, or the NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
