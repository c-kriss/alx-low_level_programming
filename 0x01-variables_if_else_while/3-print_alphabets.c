#include <stdio.h>
/**
 * main - print "Letters"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char cletter = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (cletter <= 'Z')
	{
		putchar(cletter);
		cletter++;
	}
	putchar('\n');
	return (0);
}
