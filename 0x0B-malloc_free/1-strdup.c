#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * @str: string input pointer
 * Return: duplicate on success and NULL on fail
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return ('\0');
	}

	else
	{
		char *duplicate = strdup(str);

		if (duplicate == NULL)
		{
			return ('\0');
		}

		else
		{
			return (duplicate);
		}
	}
}
