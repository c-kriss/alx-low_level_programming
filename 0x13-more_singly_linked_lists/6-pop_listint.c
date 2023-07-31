#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: input pointer
 * Return: ndata (unempty) and 0 (empty)
 */

int pop_listint(listint_t **head)
{
	int ndata;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	ndata = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (ndata);
}
