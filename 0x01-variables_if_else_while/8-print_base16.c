#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Return: return nothing
 */
int main(void)
{
	char c, d;

	c = '0';
	d = 'a';
	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	while (d <= 'f')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
