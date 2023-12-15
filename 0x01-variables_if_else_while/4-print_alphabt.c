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
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
