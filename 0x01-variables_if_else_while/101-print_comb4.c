#include <stdio.h>

/**
* main - Print combinations of two digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int h;
	int tens;
	int ones;

	for (h = 0; h <= 9; h++)
		{
			for (tens = 0; tens <= 9; tens++)
    				{
      					for (ones = tens + 1; ones <= 9; ones++)
						{
	  						putchar(h + '0');
	  						putchar(tens + '0');
	  						putchar(ones + '0');

	  						if (tens < 8)
	    							{
	      								putchar(',');
	      								putchar(' ');
	    							}
						}
    				}
		}
	putchar('\n');

	return (0);
}
