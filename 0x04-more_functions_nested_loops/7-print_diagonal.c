#include "main.h"

/**
 * print_diagonal - draws a diagonaline on the terminal
 *
 * @n: number of time to be printed
 *
 * Return: return 0
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		if (i != n - 1)
			_putchar('\n');
		i++;
	}
	_putchar('\n');
}
