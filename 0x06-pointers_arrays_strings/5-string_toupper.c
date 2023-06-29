#include "main.h"
/**
 * string_toupper - convert string to uppercase
 * @c: string input pointer
 * Return: c
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 32;
		}

		i++;
	}

	return (c);
}
