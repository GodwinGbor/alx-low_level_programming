#include <unistd.h>


/**
 * _putchar - Write char c to stdout
 * @c: char to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and the errno is set appropriately well.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
