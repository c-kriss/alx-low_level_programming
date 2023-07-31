#include "lists.h"

/**
 * listint_len - function that returns the number of elements.
 * @h: constant pointer input to structure.
 * Return: count
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
