#include <stdio.h>

/**
 * main - A program that prints all possible combination of two digits
 *
 * warning - a number like 0 and 1 should not appear twice
 *
 * Return: return nothing
 */
int main(void)
{
	int c, d;

	c = 0;
	while (c <= 8)
	{
		d = c + 1;
		while (d <= 9)
		{
			putchar(c + '0');
			putchar(d + '0');
			if (c != 8 || d != 9)
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
