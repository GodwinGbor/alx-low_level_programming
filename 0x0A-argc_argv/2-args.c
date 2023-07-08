#include <stdio.h>
#include "main.h"

/**
 * main - to print all the arguments it receives always
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int b;

	for (b = 0; b < argc; b++)
	{
		printf("%s\n", argv[b]);
	}

	return (0);
}
