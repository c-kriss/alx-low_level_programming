#include <stdio.h>
/**
 * main - prints multiples of 3 & 5
 * Return: 0
 */
int main(void)
{
	static long int n1 = 1, n2 = 2, n3;
	int i;

	printf("%zu, %zu, ", n1, n2);
		for (i = 1; i <= 96; i++)
		{
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
			printf("%zu", n3);
			if (i != 48)
			{
				printf(", ");
			}
		}
	printf("\n");
	return (0);
}

