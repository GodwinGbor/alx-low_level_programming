#include <stdio.h>
#include "main.h"

/**
 * main - to print a number of arguments passed to the program you wants
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: Always the 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
