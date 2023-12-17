#include <stdio.h>

/**
 * main - print allpossible combination of three digits
 *
 * warning - a number must not appear twice
 *
 * Return: return nothing
 */
int main(void)
{
	int c, d, e;

	c = 0;
	while (c <= 7)
	{
		d = c + 1;
		while (d <= 8)
		{
			e = d + 1;
			while (e <= 9)
			{
				putchar((c % 10) + '0');
				putchar((d % 10) + '0');
				putchar((e % 10) + '0');
				if (c != 7 || d != 8 || e != 9)
				{
					putchar(',');
					putchar(' ');
				}
				e++;
			}
		d++;
		}
	c++;
	}
	putchar('\n');
	return (0);
}
