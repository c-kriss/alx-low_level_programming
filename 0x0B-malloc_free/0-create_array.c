#include <stdlib.h>
#include "main.h"
/**
 * create_array - function that creates an array of characters
 * @size: an unassigned integer input
 * @c: input character
 *
 * Return: myarray (on success) or NULL (on fail)
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return ('\0');
	}

	else
	{

		char *myarray = malloc(size * sizeof(char));
		unsigned int i;

		if (myarray == NULL)
		{
			return ('\0');
		}

		else
		{
			for (i = 0; i < size; i++)
			{
				myarray[i] = c;
			}

			return (myarray);
		}

	}
}
