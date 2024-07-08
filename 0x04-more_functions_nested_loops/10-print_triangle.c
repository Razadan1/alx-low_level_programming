#include "main.h"
/**
* print_triangle - prints a triangle
* @size: the size of the triangle
* Return: nothing
*/
void print_triangle(int size)
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
			j = i;
			while (j < size)
			{
				_putchar(' ');
				j++;
			}
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
