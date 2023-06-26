#include <string.h>
#include "main.h"
/**
 * _strcpy - copy string from src to dest
 * @dest: a pointer where the string from src is copied
 * @src: string input pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int length = strlen(src);
	int i;

	for (i = 0; i <= length; i++)
	{
		strcpy(dest, src);
	}

	return (dest);
}
