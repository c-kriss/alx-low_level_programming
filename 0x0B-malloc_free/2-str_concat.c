#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string input pointer 1
 * @s2: string input pointer 2
 *
 * Return: concat on success and NULL on fail
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	concat = malloc((len1 + len2 + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	else
	{
		strcpy(concat, s1);
		strcat(concat, s2);
	}

	return (concat);
}
