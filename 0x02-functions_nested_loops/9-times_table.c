#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: return nothing
 */
void times_table(void)
{
	int num, mul, res;

	num = 0;
	while (num <= 9)
	{
		_putchar('0');
		mul = 1;
		while (mul <= 9)
		{
			_putchar(',');
			_putchar(' ');
			res = num * mul;
			if (res <= 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((res / 10) + '0');
			}
			_putchar((res % 10) + '0');
			mul++;
		}
		_putchar('\n');
		num++;
	}
}
