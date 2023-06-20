#include "main.h"
/**
 * print_times_table - for tables
 * @n: print number
 *
 * Description: It prints n Times table
 * No return
 */
void print_times_table(int n)
{
	int i;
	int j;
	int prod;

	if (n > 0 && n < 16)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
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
				_putchar(' ');
				_putchar(prod + '0');
				}
				else
				{
					if (prod < 100)
					{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
					}
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar((prod / 100) + '0');
						_putchar(((prod / 10) % 10) + '0');
						_putchar((prod % 10) + '0');
					}
				}
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
	}
}
