#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: this separates the strings
 * @n: the number of arguements
 * Return: return nil if one string is null
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;

	va_list dStrings;

	va_start(dStrings, n);
	a = 0;
	while (a < n)
	{
		char *p = va_arg(dStrings, char *);

		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}

		if ((a < n) && (separator != NULL))
		{
			printf("%s", separator);
		}
		a++;
	}
	va_end(dStrings);
	putchar('\n');
}
