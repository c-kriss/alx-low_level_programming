#include "lists.h"

/**
 * list_len -  a function that returns elements of a list.
 * @h: input pointer to a structure
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const struct list_s *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
