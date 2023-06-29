#include <string.h>
#include "main.h"
/**
 * _strcat - Function pointer to concatinate 2 strings
 * @dest: String input pointer
 * @src: String input pointer
 * @n: n bytes to be concatinated
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
