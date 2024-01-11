#include "main.h"

/**
 * print_times_table - print n times table
 *
 * @n: the multiplication number
 *
 * Return: return 0
 */
void print_times_table(int n)
{
	int mult, res;

	while (n <= 14)
	{
		if (n < 0 && n > 15)
			break;
		mult = 1;
		while (mult <= 12)
		{
			if (mult != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			res = mult * n;
			if (res <= 144)
				_putchar(' ');
			else
				_putchar((res / 100) + '0');
			_putchar((res % 10) + '0');
			mult++;
		}
		_putchar('\n');
		n++;
	}
}
