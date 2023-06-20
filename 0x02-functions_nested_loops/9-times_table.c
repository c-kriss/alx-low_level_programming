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
			if (i == 0 && j == 0)
			{
				prod = 0;
				_putchar(prod + '0');
			}
			else
			{
				if (prod < 10)
				{
					_putchar(prod + '0');
				}
				else
				{
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
