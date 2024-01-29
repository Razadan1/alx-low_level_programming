#include "main.h"

/**
 * print_number - prints an integer
 * @n: the number to be printed
 * Return: return nothing
 */
void print_number(int n)
{
	int divisor = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / divisor >= 10)
		divisor *= 10;

	do {
		_putchar(n / divisor + '0');
		n %= divisor;
		divisor /= 10;
	} while (divisor != 0);
}
