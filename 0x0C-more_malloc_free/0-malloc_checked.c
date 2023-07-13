#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Write a function that allocates memory using malloc.
 * @b: inputed Size to be allocated
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	int *dmalloc = (int *)malloc(b * sizeof(int));

	if (dmalloc == NULL)
	{
		exit(98);
	}

	else
	{
		return (dmalloc);
	}
}
