#include "main.h"
#include <ctype.h>
/**
 * rot13 - encodes a string
 * @str: the string to be encoded
 * Return: reurn the encoded string
 */
char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		char ab = *ptr;

		if ((islower(ab) || isupper(ab)) && ((ab >= 'A' && ab <= 'Z')
				|| (ab >= 'a' && ab <= 'z')))
		{
			char base = (islower(ab)) ? 'a' : 'A';
			char offset = (ab - base + 13) % 26;
			*ptr = base + offset;
		}
		ptr++;
	}
	return (str);
}
