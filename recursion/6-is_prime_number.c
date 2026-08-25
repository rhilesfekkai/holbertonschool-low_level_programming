#include "main.h"

/**
 * is_prime - checks if a number is divisible by another number
 * @n: number to check
 * @divisor: divisor
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime(n, divisor + 1));
}

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: number to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime(n, 2));
}

