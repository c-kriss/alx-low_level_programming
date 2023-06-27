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
	int n = 0;
	int sign = 1;
	int digit;
	int hasDigit = 0;

	while (s[i] != '\0')
	{
	if (s[i] == '-')
		sign *= -1;

	if (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
		n = n * 10 + digit;
		hasDigit = 1;

	if (s[i + 1] < '0' || s[i + 1] > '9')
		break;
	}
	i++;
	}
	return (hasDigit ? n * sign : 0);
}
