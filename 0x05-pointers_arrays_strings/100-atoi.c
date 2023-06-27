#include <string.h>
#include "main.h"
/**
 * _atoi - converts string to an integer
 * @s: string input pointer
 * Return: 0
 */
int _atoi(char *s)
{
	int i = 0;
	int result = 0;
	int sign = 1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		i++;
	}	


	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	result *= sign;
	return (result);
}
