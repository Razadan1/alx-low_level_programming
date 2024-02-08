#include <stdio.h>

/**
* main - Entry point of the program
* @argc: The counts of arguments
* @argv: An array of strings containing the arguments
*
* Return: return 0 on success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
