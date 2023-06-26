#include <string.h>
#include "main.h"
/**
 * puts2 - Print every other character
 * @str: String input pointer
 * Return: no return
 */
void puts2(char *str)
{
	int i;
	int length;

	length = strlen(str);
	for (i = 0; i <= length - 1; i = i + 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
