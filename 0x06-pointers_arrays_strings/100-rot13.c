#include "main.h"
/**
 * rot13 - encodes string into rot13
 * @c: String input pointer
 * Return: c
 */
char *rot13(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
	if ((c[i] >= 'a' && c[i] <= 'm') || (c[i] >= 'A' && c[i] <= 'M'))
	{
		c[i] += 13;
	}

	else if ((c[i] >= 'n' && c[i] <= 'z') || (c[i] >= 'N' && c[i] <= 'Z'))
	{
		c[i] -= 13;
	}
		i++;
	}

	return (c);
}
