#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the beginning.
 * @head: input pointer to pointer of a structure.
 * @str: input string pointer.
 *
 * Return: NULL on fail and new_node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	struct list_s *new_node;
	struct list_s *current;

	if (str == NULL)
		return (NULL);

	new_node = (struct list_s *)malloc(sizeof(struct list_s));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
	}
	current->next = new_node;
	return (new_node);
}
