#include "main.h"
/**
* print_triangle - prints a triangle
* @size: the size of the triangle
* Return: nothing
*/
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		i = 1;

		while (i <= size)
		{
			j = size - i;
			while (j > 0)
			{
				_putchar(' ');
				j--;
			}
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			i++;
			_putchar('\n');
		}
	}
}
