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
		d = (-1 * (n % 10));
		_putchar(d + '0');
		return (d);
	}
	else
	{
		d = n % 10;
		_putchar(d + '0');
		return (d);
	}
}
