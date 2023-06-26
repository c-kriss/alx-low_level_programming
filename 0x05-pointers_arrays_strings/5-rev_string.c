#include <string.h>
#include "main.h"
/**
 * rev_string - Print string in reverse order
 * @s: String input pointer
 * Return: no return
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
