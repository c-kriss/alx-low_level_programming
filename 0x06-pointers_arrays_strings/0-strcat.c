#include <string.h>
#include "main.h"
/**
 * _strcat - Function pointer to concatinate 2 strings
 * @dest: String input pointer
 * @src: String input pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
