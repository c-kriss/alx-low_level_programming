#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index in a decimal number.
 * @n: The number to search.
 * @index: The index of the bit.
 *
 * Return: The value of the bit at the given index, or -1 if index is invalid.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
