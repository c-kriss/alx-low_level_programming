#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - for alphabets
 * @n: print character
 *
 * Description: It print natural numbers
 * No return
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
	for (i = n; i <=98; i++)
	{
		printf("%d", i);
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	}
	else
	{
		for (i = n; i >=98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
