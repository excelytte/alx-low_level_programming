#include <stdio.h>
#include <main.h>

/**
* main - Print the word "_putchar"
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char s[] = "_putchar";
	for (i = 0; i < 8; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}

