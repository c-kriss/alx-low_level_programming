#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: constant pointer input to structure.
 * Return: count
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("%d", temp->n);
		printf("\n");
		count++;
		temp = temp->next;
	}

	return (count);
}
