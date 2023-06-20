#include "main.h"

/**
 * _abs - for absolutes
 * @num: provide number
 *
 * Description: It provide absolutes
 * Return: num
 * on match, Return -num
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
