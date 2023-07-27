#include "lists.h"

/**
 * print_list -  a function that prints all the elements of a list_t list.
 * @h: input pointer to a structure
 * Return: count
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const struct list_s *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		count++;

		if (ptr->str == NULL)
		{
			printf("[0] (nil)");
			printf("\n");
		}
		else
		{
			printf("[%u] %s", ptr->len, ptr->str);
			printf("\n");
		}

		ptr = ptr->next;
	}

	return (count);
}
