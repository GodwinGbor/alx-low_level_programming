#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the best char c to stdout
 * @c: char to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is to set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
