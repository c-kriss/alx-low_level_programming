#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: input pointer to structure
 * Return: Nothing
 */
void free_list(list_t *head)
{
	struct list_s *temp;

	temp = head;
	while (temp != NULL)
	{
		free(temp->str);
		temp = temp->next;
		free(head);
		head = temp;
	}
}
