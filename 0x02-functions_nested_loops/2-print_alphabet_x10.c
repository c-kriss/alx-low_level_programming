#include "main.h"
/**
 * print_alphabet_x10 - for alphabets
 * Description: It prints alphabets 10 times
 * Return: No returns
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
