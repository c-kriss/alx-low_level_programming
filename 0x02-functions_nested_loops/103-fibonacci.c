#include <stdio.h>
/**
 * main - print fibo sum
 * Return: 0
 */
int main (void)
{
	int i, n1 = 1, n2 = 2, n3, sum = 0;
	for (i = 1; i <= 33; i++)
	{
		if (n1 < 4000000 && n1 % 2 == 0)
		{
			sum += n1;
		}
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	printf("%d\n", sum);
	return (0);
}
