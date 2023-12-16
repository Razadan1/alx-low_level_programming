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
	while (c <= 8)
	{
		d = c + 1;
		while (d <= 9)
		{
			e = c + 1;
			while (e <= 9)
			{
				putchar(c + '0');
				putchar(d + '0');
				putchar(e + '0');
				if (c != 8 || d != 9 || e != 7)
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
