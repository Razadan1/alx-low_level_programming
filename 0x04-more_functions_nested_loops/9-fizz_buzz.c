#include "main.h"
#include <stdio.h>
/**
* main - Prints the number 1 to 100
* For multiple of three print fizz
* for multiple of five print buzz
* for numbers which are multiple of 3 and 5 print fizzbuzz
* Return: void
*/
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
