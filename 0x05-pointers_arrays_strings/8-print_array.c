#include <stdio.h>
#include "main.h"
/**
 * print_array - prints element of an array integer
 * @a: Array input pointer
 * @n: Number of array to be printed
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(",");
			printf(" ");
		}
	}

	printf("\n");
}
