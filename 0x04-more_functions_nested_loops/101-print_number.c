#include "main.h"
/**
* print_number - prints an integer
* @n: the integer to be printed
* Return: Void
*/
void print_number(int n)
{
	int divider;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == NULL)
    {
		return;
    }

	divider = 1;

	while (n / divider >= 10)
	{
		divider *= 10;
	}

	while (divider != 0)
	{
		int num = n / divider;

		_putchar(num + '0');
		n %= divider;
		divider /= 10;
	}
}
