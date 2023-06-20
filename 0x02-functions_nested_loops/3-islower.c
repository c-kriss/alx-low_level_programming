#include "main.h"
/**
 * Checks for lower case
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
