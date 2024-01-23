#include "main.h"
#include <stdio.h>
/**
 * print_array - print the n elements of an array
 * of integers
 * @a: array to be printed
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int b = 0;

	while (b < n)
	{
		if (b == 0)
		{
			printf("%d", a[b]);
		}
		else
		{
			printf(", %d", a[b]);
		}
		b++;
	}
	printf("\n");
}
