#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all the parameters
 *
 * @n: the number or parameters
 *
 * Return: return the sum else 0
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list summing;
	int answer;

	va_start(summing, n);
	if (n == 0)
		return (0);
	answer = 0;

	for (i = 0; i < n; i++)
	{
		answer += va_arg(summing, int);
	}
	va_end(summing);

	return (answer);
}
