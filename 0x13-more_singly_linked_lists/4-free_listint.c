#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: input pointer
 * Return: nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
