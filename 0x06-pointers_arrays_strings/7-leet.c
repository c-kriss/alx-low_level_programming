#include "main.h"
/**
 * leet - encodes a string into leet
 * @c: string input pointer
 * Return: c
 */
char *leet(char *c)
{
	int i = 0, j;
	char myarray1[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char myarray2[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	while (c[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == myarray1[j])
			{
				c[i] = myarray2[j];
			}
		}

		i++;
	}

	return (c);
}
