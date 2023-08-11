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
		for (tens = h + 1; tens <= 9; tens++)
    		{
      			for (ones = tens + 1; ones <= 9; ones++)
			{
	  			if ((tens != h) != ones)
				{
					putchar(h);
	  				putchar(tens);
	  				putchar(ones);
					if (h == 7 && tens == 8)
					continue;
					
					putchar(',');
	      				putchar(' ');
	    				
				}
			}
    		}
	}
	putchar('\n');

	return (0);
}
