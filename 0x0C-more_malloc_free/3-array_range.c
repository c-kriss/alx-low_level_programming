#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * array_range - a function that creates an array of integers.
 * @min: a starting point of an array
 * @max: an ending point of an array
 *
 * Return: myarray on success and NULL on fail
 */

int *array_range(int min, int max)
{
	int *myarray;
	int i;
	int size;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;
	myarray = (int *)malloc(size * sizeof(int));

	if (myarray == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		myarray[i] = min;
		min++;
	}

	return (myarray);
}
