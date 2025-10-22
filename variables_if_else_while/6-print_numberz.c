#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *        using only putchar and no char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + 48); /* 48 is ASCII code for '0' */
	putchar('\n');

	return (0);
}
