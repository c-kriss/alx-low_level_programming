#include <string.h>
#include "main.h"
/**
 * _strncpy - copy n-bytes of src string to dest
 * @dest: string input pointer
 * @src: string input pointer
 * @n: integer n-bytes to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
