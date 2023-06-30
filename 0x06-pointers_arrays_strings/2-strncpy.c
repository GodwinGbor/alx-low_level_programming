#include "main.h"
/**
 * _strncpy - A copy of the string
 * @dest: The input value
 * @src: The input value
 * @n: The input value
 *
 * Return: The dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}
