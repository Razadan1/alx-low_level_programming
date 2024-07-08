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
			j = i;
			while (j < size)
			{
				_putchar(' ');
				j++;
			}
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			i++;
			_putchar('\n');
		}
	}
}
