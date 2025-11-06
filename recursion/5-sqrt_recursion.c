#include "main.h"

/**
 * _find_sqrt - helper function to find natural square root recursively
 * @n: the number to find the square root of
 * @i: current number to test as square root
 *
 * Return: the natural square root, or -1 if none
 */
int _find_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: natural square root, or -1 if no natural square root exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_find_sqrt(n, 0));
}
