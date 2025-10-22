#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 *        using only putchar three times
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Print digits 0-9 */
	for (i = 0; i < 10; i++)
		putchar(i + '0');

	/* Print letters a-f */
	for (i = 0; i < 6; i++)
		putchar(i + 'a');

	putchar('\n');

	return (0);
}
