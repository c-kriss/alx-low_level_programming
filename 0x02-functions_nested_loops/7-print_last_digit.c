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

	r = (c % 10);
	if (r < 0)
	{
		r = -r;
	}
	_putchar(r + '0');
	return (r);
}
