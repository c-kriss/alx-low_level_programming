#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Input pointer to a binary string.
 * Return: The converted number, or 0 if there is an error.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, length = strlen(b);
	unsigned int result = 0;

	if (length == 0)
		return (0);

	for (i = 0; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = result * 2 + (b[i] - '0');
	}

	return (result);
}

