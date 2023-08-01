#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: input pointer
 * @idx: input integer
 * @n: input integer
 *
 * Return: new_node (success) or NULL (fail)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node;
	listint_t *temp = *head;

	if (*head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node = (listint_t *)malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
