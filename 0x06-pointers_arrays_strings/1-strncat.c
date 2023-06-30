#include "main.h"
/**
 * _strncat - The concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: an input value
 * @n: an input value
 *
 * Return: The dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int b;
	int j;

	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[b] = src[j];
	b++;
	j++;
	}
	dest[b] = '\0';
	return (dest);
}
