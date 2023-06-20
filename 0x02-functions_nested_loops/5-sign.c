#include "main.h"

/**
 * print_sign - for signs
 * @n: provide character
 *
 * Description: It prints number signs
 * Return: 0
 * On match, reutn 1, and -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
