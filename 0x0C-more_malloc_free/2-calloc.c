#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - a function that allocates memory for an array.
 * @nmemb: an array to allocate
 * @size: n-bytes of the array to allocate
 *
 * Return: myarray on success and NULL on fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t *myarray;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	myarray = (size_t *)malloc(nmemb * size);

	if (myarray == NULL)
	{
		return (NULL);
	}

	myarray = memset(myarray, 0, nmemb * size);

	return (myarray);
}
