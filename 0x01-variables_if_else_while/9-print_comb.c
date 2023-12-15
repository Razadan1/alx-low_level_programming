#include <stdio.h>

/**
 * main - print all possible combination of single digitwith comma
 *
 * Return: return nothing
 */
int main(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		putchar(c + '0');
		if (c < 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
