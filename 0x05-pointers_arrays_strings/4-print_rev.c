#include <string.h>
#include "main.h"
/**
 * print_rev - Print string in reverse order
 * @s: String input pointer
 * Return: no return
 */
void print_rev(char *s)
{
	int i;
	int length;

	length = strlen(s);
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
