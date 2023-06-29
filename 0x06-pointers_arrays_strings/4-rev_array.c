#include "main.h"
/**
 * reverse_array - reverse elements of an array
 * @a: array pointer to integer
 * @n: number of elements of the array
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int i, j = n - 1, temp;

	for (i = 0; i < j; i++)
	{
		if (j > i)
		{
			temp = a[j];
			a[j] = a[i];
			a[i] = temp;
		}

		j--;
	}
}
