#include <stdio.h>

/**
 * main - prints all the alphabets in lower case using putchar
 *
 * Return: return nothing
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
