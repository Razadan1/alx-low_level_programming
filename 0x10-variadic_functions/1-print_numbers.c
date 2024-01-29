#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints the numbers follow by a new line
 *
 * @separator: the separator
 *
 * @n: the fixed arguement
 * Return: return nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;

	va_list dNumbers;

	va_start(dNumbers, n);

	a = 0;
	while (a < n)
	{
		printf("%d", va_arg(dNumbers, int));

		if ((a < n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
		a++;
	}
	va_end(dNumbers);
	putchar('\n');
}
