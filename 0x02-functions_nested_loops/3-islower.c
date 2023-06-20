#include "main.h"
/**
 * islower - for alphabets
 * @c: print character
 *
 * Description: It checks lower alphabets
 * Return: 0
 * On match, return 1
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
