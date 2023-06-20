#include "main.h"
/**
 * islower - for alphabets
 * @parameterc: print character
 *
 * Description: It checks lower alphabets
 * Return: 0
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if ( c == i)
		{
			return (1);
		}
	}
	return (0);
}
