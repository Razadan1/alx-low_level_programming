#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: return nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
