#include "main.h"

/**
 * _islower - checks if a character is lower case.
 * @c: the character to check
 * Return: 1 for lowercase. 0 for the rest.
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
