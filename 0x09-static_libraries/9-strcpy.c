#include "main.h"

/**
 * char *_strcpy - the function that copies all the string pointed to the src
 * @dest: A copy to
 * @src: A copy from
 * Return: The string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int b = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; b < l ; b++)
	{
		dest[b] = src[b];
	}
	dest[l] = '\0';
	return (dest);
}
