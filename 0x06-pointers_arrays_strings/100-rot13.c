#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: The pointer is to the string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int b;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (b = 0; s[b] != '\0'; b++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[b] == data1[j])
			{
				s[b] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
