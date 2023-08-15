#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char l;
	int i = 0;

	while (i < 10)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		i++;
	}
}
