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
	int i;

	i = 0;
	while (i < n)
	{

		_putchar(' ');
		i++;
	}
	_putchar('\\');
	_putchar('\n');
}
