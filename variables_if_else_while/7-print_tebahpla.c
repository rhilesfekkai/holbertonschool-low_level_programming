#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 *        using only putchar twice
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 122; ch >= 97; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
