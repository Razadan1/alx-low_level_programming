#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers from n to 98
 *
 * @n: the unknown number
 *
 * Return: return 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n++);
			if (n != 99)
			{
				printf(", ");
			}
		}
	}
	else
	{
		while (n >= 98)
                {
			printf("%d", n--);
			if(n != 97)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
