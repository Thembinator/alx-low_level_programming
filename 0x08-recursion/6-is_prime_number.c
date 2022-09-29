#include "main.h"

/**
 * is_prime_number - returns 1 if n is prime number
 * @n: number to be checked
 * Return: returns 1 if n prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int start = n / 2;

	int is_prime(int, int);

	if (n <= 1)
	return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - returns 1 if n is prime number
 * @n: number to be checked
 * @start: number to start checking from
 * Return: returns 1 if n prime, 0 otherwise
 */

int is_prime(int n, int start)
{

	if (start <= 1)
	return (1);
	else if (n % start == 0)
	return (0);
	return (is_prime(n, start - 1));
}
