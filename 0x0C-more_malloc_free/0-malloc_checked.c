#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Write a function that allocates memory using malloc.
 * @b: inputed Size to be allocated
 * Return: void*
 */

void *malloc_checked(unsigned int b)
{
	int *dmalloc = malloc(b);

	if (dmalloc == NULL)
	{
		exit(98);
	}

	return (dmalloc);
}
