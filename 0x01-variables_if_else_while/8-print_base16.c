#include <stdio.h>

/**
 * main - print alphabet in lower and uppercase
 *
 *
 * Return: (0) Success
 */

int main(void)
{

	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
