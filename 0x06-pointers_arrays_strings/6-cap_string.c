#include "main.h"
/**
 * cap_string - convert string to capital
 * @c: string input pointer
 * Return: c
 */
char *cap_string(char *c)
{
	int i = 0;
	int capitalize = 1;

	while (c[i] != '\0')
	{
		if (capitalize && c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 32;
			capitalize = 0;
		}

		else if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n')
		{
			capitalize = 1;
		}

		else if (c[i] == ',' || c[i] == ';' || c[i] == '.')
		{
			capitalize = 1;
		}

		else if (c[i] == '!' || c[i] == '?' || c[i] == '\"')
		{
			capitalize = 1;
		}

		else if (c[i] == '(' || c[i] == ')' || c[i] == '{')
		{
			capitalize = 1;
		}

		else if (c[i] == '}')
		{
			capitalize = 1;
		}

		else
		{
			capitalize = 0;
		}

		i++;
	}

	return (c);
}
