#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: integer separator
 * @n: number of remaining arguments
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i, j = 0;
	int length = strlen(separator);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
