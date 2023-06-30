#include "main.h"
/**
 * reverse_array - reverse array of the integers
 * @a: array
 * @n: the number of the elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b;
	int t;

	for (b = 0; b < n--; b++)
	{
		t = a[b];
		a[b] = a[n];
		a[n] = t;
	}
}
