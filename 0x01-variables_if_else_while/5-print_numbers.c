#include <stdio.h>

/**
 * main - print all single digit number of base 10 starting from 0
 *
 * Return: return 0
 */
int main(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

