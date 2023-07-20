#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the summ of passed argument
 * @n: number of arguments
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
