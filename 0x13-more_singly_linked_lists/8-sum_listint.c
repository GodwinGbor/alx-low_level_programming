#include "lists.h"

/**
 * sum_listint - how to calculate a sum of all the data in the listint_t list
 * @head: From the first node in the linked list
 *
 * Return: result in sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
