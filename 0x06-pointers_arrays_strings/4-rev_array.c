#include "main.h"
#include <stdio.h>

/**
 * reverse_array - prints the array in reverse
 * @a : array to be reversed
 * @n: number of elements in array
 * Return: return nothing
 */

void reverse_array(int *a, int n)
{
	int i, rev_array;

	i = 0;
	while (i < n / 2)
	{
		rev_array = a[i];
		a[i] = a[n - i - 1];

		a[n - i - 1] = rev_array;
		i++;
	}
}
