#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: input pointer
 * Return: Sum (success) or 0 (fail)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = NULL;

	if (head == NULL)
	{
		return (0);
	}

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
