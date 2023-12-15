#include <stdio.h>

/**
 * main - print all single digit number of base 10 starting from 0
 *
 * Return: return 0
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d\n", n);
		n++;
	}
	return (0);
}

