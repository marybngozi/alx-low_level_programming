#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the whole alphabets in loower case
 * Return:  0
*/
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; ++l)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
