#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - says if the integer is the prime number or not
 * @n: The number to evaluate
 *
 * Return: 1 if n is a prime number,then 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - To calculate if the number is prime recursively or not
 * @n: The number to evaluate
 * @i: An iterator
 *
 * Return: 1 if n is prime,then 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
