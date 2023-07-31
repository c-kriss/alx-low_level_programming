#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: input pointer
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

}
