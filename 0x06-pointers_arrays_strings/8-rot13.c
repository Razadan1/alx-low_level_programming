#include "main.h"

/**
* rot13 - Write a function that encodes a string using rot13
*
* @hi: This is my input string
*
* Return: String converted to rot13
*/

char *rot13(char *hi)
{
	int index;

	char c;

	for (index = 0; hi[index] != '\0'; ++index)
	{
		c = hi[index];
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
			{
				hi[index] += 13;
			}
			else
			{
				hi[index] -= 13;
			}
		}
	}
	return (hi);
}
