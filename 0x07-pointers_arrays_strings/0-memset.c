#include "main.h"
#include <string.h>
/**
 * _memset - Function that fills memory with constant byte
 * @s: A string input pointer
 * @b: A string input pointer
 * @n: Integer input variable
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
