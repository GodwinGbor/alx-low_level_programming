#include "main.h"
/**
 * leet - The encode into the 1337speak
 * @n: The input value
 * Return: n value of the string
 */
char *leet(char *n)
{
	int b, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (b = 0; n[b] != '\0'; b++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[b] == s1[j])
			{
				n[b] = s2[j];
			}
		}
	}
	return (n);
}
