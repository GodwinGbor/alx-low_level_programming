#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node in a linked list at a certain index
 * @head: From the pointer to the first element in the list
 * @index: The index of the node to be deleted
 *
 * Return: 1 (Success), then or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int b = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (b < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		b++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
