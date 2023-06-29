#include <string.h>
#include "main.h"

/**
 * _strncpy : copy n-bytes of src string to dest
 * @dest: string input pointer
 * @src: string input pointer
 * @n: n-bytes to be copied
 * return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
