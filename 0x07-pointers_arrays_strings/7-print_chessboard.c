#include "main.h"
/**
 * The print_chessboard - The Entry point
 * @a: The array
 * Return: Always make 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int b;
	int j;

	for (b = 0; b < 8; b++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[b][j]);
		_putchar('\n');
	}
}
