#include <string.h>
#include "main.h"
/**
 * puts_half - Print half of the string
 * @str: String input pointer
 * Return: no return
 */
void puts_half(char *str)
{
	int i;
	int length;

	length = strlen(str);

	if (length % 2 != 0)
	{
		int n = ((length - 1) / 2);
		int start = (length - n);

		for (i = start; i <= length - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		int m = (length / 2);

	for (i = m; i <= length - 1; i++)
	{
		_putchar(str[i]);
	}
	}

	_putchar('\n');
}
