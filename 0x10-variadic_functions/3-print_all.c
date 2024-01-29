#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: the list of arguements passed
 * Return: return nil if string is null
 */
void print_all(const char * const format, ...)
{
	unsigned int a = 0;
	char *separator = " ";

	va_list print;

	va_start(print, format);

	while (format && format[a])
	{
		switch (format[a])
		{
			case 'i':
				printf("%s%d", separator, va_arg(print, int));
				break;
			case 'c':
				printf("%s%c", separator, va_arg(print, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(print, double));
				break;
			case 's':
				{
					char *string = va_arg(print, char *);

					if (string == NULL)
						string = "(nil)";
					printf("%s%s", separator, string);
				}
				break;
			default:
				break;
		}

	separator = ", ";
	a++;
	}
	va_end(print);
	putchar('\n');
}


