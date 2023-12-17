#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * warning: methos of number should be in asc order
 *
 * warnings: 01 and 10 are considered the same.
 *
 * Return: return nothing
 */
int main(void)
{
	int c, d;

	c = 0;
	while (c <= 98)
	{
		d = c + 1;
		while (d <= 99)
		{
			putchar((c / 10) + '0');
			putchar((c % 10) + '0');
			putchar(' ');
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');

			if (c != 98 || d != 99)
			{
				putchar(',');
				putchar(' ');
			}
			d++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
