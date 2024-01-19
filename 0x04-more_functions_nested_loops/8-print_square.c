#include "main.h"

/**
 *  print_square - prints a square
 *
 *  @size: the size of the square
 *
 *  Return: return 0
 */
void print_square(int size)
{
	int i, j;
	
	i = 0;
	while (i <= size)
	{
		_putchar('#');
		j = 0;
		while (j <= i)
		{
			_putchar('#');
			_putchar(' ');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
