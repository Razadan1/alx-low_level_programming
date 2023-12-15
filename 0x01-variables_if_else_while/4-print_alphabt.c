#include <stdio.h>

/**
 * main - printthe alphabets in small letter except q and e.
 *
 * Return: return nothing
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		c++;
		if (c != 'e' || c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
