#include "main.h"

/**
 * reset_to_98 - reset int variable to 98
 * @a: An integer input pointer 1
 * @b: An integer input pointer 2
 *
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
