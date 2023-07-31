#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t.
 * @head: input pointer.
 * @index: input integer.
 *
 * Return: temp (Success) or NULL (Fail).
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;
	unsigned int i;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	if (index >= count)
	{
		return (NULL);
	}

	temp = head;

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}

	return (temp);
}
