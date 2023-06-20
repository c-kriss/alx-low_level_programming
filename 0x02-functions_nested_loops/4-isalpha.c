#include "main.h"
/**
 * isalpha - for alphabets
 * @c: print character
 *
 * Description: It checks alphabets
 * Return: 0
 * On match, return 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
