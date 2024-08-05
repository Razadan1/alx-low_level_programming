#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
/* int main(void)
{
	char *s = "hello";

	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
*/

char *_strchr(char *, char);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "First, solve the problem. Then, write the code.";
	char *f;

	f = _strchr(s, '\0');
	printf("%s\n", (f == NULL ? "nil" : f));
	return (0);
}
