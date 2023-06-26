#include "main.h"

/**
 * swap_int - swap two integers
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
