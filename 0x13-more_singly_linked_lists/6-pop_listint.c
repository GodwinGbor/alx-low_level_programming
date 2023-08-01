#include "lists.h"

/**
 * pop_listint - to deletes the head node of the linked list
 * @head: From the pointer to the first element in a linked list
 *
 * Return: data inside the elements that was deleted,
 * or 0 if the list is always empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
