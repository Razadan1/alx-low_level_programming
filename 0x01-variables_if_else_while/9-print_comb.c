#include <stdio.h>

/**
 * main - print all possible combination of single digitwith comma
 *
 * Return: return nothing
 */
int main(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		putchar(',');
		putchar(' ');
		c++;
	}
	putchar('\n');
	return (0);
}
