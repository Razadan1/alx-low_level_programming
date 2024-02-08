#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguements passed
 *
 * @argc: count of arguement
 * @argv: vector of arguement
 * Return: return 0
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
