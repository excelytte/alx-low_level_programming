#include "main.h"

/**
 * _islower(int c) - checks if a character is lower case.
 * @c: the character to check
 * return: 1 for lowercase. 0 for the rest.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
