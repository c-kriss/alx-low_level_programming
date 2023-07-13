#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string input pointer.
 * @s2: string input pointer.
 * @n: n-bytes of s2 to add to s1.
 *
 * Return: nconcat on success and NULL on fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1, len2;
	char *nconcat;

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

	if (n >= len2)
	{
		n = len2;
	}

	nconcat = (char *)malloc((len1 + n + 1) * sizeof(char));

	if (nconcat == NULL)
	{
		return (NULL);
	}

	strcpy(nconcat, s1);
	strncat(nconcat, s2, n);

	return (nconcat);
}
