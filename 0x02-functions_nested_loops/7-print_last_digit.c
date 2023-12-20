#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 *
 * @n: the number
 *
 * Return: return the value of the digit
 */
int print_last_digit(int n)
{
	int d;

	if (n < 0)
	{
		n = -n;
	}
	d = n % 10;

	_putchar('0' + d);
	return (d);
}
