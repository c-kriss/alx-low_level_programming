#include "main.h"
/**
 * Print alphaberts - (a-z) 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
		_putchar(i);
		}
		j++;
	_putchar('\n');
	}
}
