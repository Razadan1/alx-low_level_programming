#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assign a random variable to n.
 *
 * x: the last digit of random number
 * n: variable name for random number
 *
 * Return: return nothing
 */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, x);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	return (0);
}
