#include "main.h"

/**
 * leet - encodes string to numbers
 * @ptr: character to be transformed
 * Return: return ptr to the encoded value
 */
char *leet(char *ptr)
{
	char *ltr = ptr;
	char leetMap[128] = {0};

	leetMap[(unsigned char)'a'] = leetMap[(unsigned char)'A'] = '4';
	leetMap[(unsigned char)'e'] = leetMap[(unsigned char)'E'] = '3';
	leetMap[(unsigned char)'o'] = leetMap[(unsigned char)'O'] = '0';
	leetMap[(unsigned char)'t'] = leetMap[(unsigned char)'T'] = '7';
	leetMap[(unsigned char)'l'] = leetMap[(unsigned char)'L'] = '1';

	while (*ltr != '\0')
	{
		if (leetMap[(unsigned char)*ltr])
		{
			*ltr = leetMap[(unsigned char)*ltr];
		}
		ltr++;
	}
	return (ptr);
}
