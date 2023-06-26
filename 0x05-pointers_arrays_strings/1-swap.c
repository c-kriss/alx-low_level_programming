#include "main.h"

/**
 * reset_to_98 - reset int variable to 98
 * @a: pointer of first digit
 * @b: Pointer of second digit
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
