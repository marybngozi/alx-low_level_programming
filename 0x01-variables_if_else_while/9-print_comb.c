#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the single digits in base 10
 * Return:  0
*/
int main(void)
{
	long int nums = 9876543210;
	int n = 0;

	while (n <= 9)
	{
		int k = nums % 10;

		putchar(k + '0');
		n++;
		nums = nums / 10;
		if (k == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
