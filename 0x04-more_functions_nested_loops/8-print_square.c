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


	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 1;
		while (i <= size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
