#include "main.h"
/**
 * print_last_digit - for digits
 * @c: print number
 *
 * Description: returns the last digit
 * Return: r
 */
int print_last_digit(int c)
{
	int r;

	if (c < 0)
	{
		c = -c;
		r = (c % 10);
	}
	else
	{
		r = (c % 10);
	}
	_putchar(r + '0');
	return (r);
}
