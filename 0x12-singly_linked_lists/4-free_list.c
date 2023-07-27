#include "lists.h"

/**
 * free_list: frees list_s structure
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
