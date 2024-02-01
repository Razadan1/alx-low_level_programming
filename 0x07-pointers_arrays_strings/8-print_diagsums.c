#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: 2d array of chars
 * @size: number matrix
 * Return: void
 */

void print_diagsums(int *a, int size)

{
      /*Declaring variables*/

	int a;

	int sum, sum2;

	sum = 0;
	sum2 = 0;

	i = 0;
	while (i < size) /*number repetitions*/
{
      /*sums for diagsums*/

	sum = sum + *(a + i * size + i);
	sum2 = sum2 + *(a + i * size + size - i - 1);

	i++; /*add +1*/
}

	printf("%i, %i\n", sum, sum2);
}
