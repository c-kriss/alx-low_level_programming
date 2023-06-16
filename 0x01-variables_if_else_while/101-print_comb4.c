#include <stdio.h>
/**
 * main - print numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 1000; i++)
	{
		if ((i / 100) < ((i / 10) % 10) && ((i / 10) % 10) < (i % 10))
		{
			putchar(i / 100 + '0');
			putchar(((i / 10) % 10 ) + '0');
			putchar(i % 10 + '0');
		if (i < 789)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
