#include "main.h"
#include <stdio.h>

/**
 * main - test the _strlen_recursion function
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = _strlen_recursion("Holberton");
	printf("%d\n", n);
	return (0);
}
