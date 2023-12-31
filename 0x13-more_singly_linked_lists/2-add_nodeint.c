#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning.
 * @head: input pointer to structure pointer.
 * @n: constant input integer.
 *
 * Return: new_node (on success) NULL (on fail)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
