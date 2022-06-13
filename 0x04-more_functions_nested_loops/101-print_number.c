#include "main.h"

/**
 * print_number - print integer using _putchar
 * @n: number to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		printm(n / 10);
	_putchar(n % 10 + '0');
}
