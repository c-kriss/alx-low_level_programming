#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Pointer to a function that reallocates a memory block.
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: ptr if new_size == old_size, newadd on success and NULL on fail
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	size_t *newadd;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newadd = (size_t *)malloc(new_size * sizeof(size_t));

	if (ptr == NULL)
	{
		return (newadd);
	}

	if (new_size > old_size)
	{
		memcpy(newadd, ptr, old_size < new_size ? old_size : new_size);
		free(ptr);
		return (newadd);
	}
}
