#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: Number of remaining arguments
 * Return: Sum on success and 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i;
	unsigned int sum = 0, x;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}

	va_end(args);
	return (sum);
}
