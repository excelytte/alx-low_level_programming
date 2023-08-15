#include <stdio.h>

int main(void)
{

	int a, sum;

	for (a = o; a <= 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			sum += a;
	}
	printf("%d\n", sum);
	return (0);
}
