#include "main.h"
#include <unistd.h>
/**
 * _putchar - how to write the char c to stdout
 * @c: The char to be printed
 *
 * Return: Always on success 1.
 * On error, -1 is returned, and then errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
