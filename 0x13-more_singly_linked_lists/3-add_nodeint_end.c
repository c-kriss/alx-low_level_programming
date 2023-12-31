#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: input pointer to structure pointer.
 * @n: constant integer input variable.
 *
 * Return: new_node (on success) or NULL (on fail).
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node;
	temp = NULL;

	return (new_node);
}
