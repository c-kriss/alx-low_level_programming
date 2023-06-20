#include "main.h"
/**
 * times_table - prints table
 * Description: It prints 9 times table
 * Return: No returns
 */
void times_table(void)
{
	int i;
	int j;
	int prod;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			prod = (i * j);
			if (j == 0)
			{
				_putchar(prod + '0');
			}
			else
			{
				if (prod < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
