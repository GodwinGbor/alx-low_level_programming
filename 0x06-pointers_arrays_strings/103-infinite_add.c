#include "main.h"

/**
 * rev_string - The reverse array
 * @n: An integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int b = 0;
	int j = 0;
	char temp;

	while (*(n + b) != '\0')
	{
		b++;
	}
	b--;

	for (j = 0; j < b; j++, b--)
	{
		temp = *(n + j);
		*(n + j) = *(n + b);
		*(n + b) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, b = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + b) != '\0')
		b++;
	while (*(n2 + j) != '\0')
		j++;
	b--;
	j--;
	if (j >= size_r || b >= size_r)
		return (0);
	while (j >= 0 || b >= 0 || overflow == 1)
	{
		if (b < 0)
			val1 = 0;
		else
			val1 = *(n1 + b) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		j--;
		b--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}

