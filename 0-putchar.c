cd ~/holbertonschool-low_level_programming/functions_nested_loops || exit

echo '#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}' > 0-putchar.c

echo '#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}' > _putchar.c

echo '#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

#endif /* MAIN_H */' > main.h

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
./0-putchar

git add 0-putchar.c _putchar.c main.h
git commit -m "Task 0: Add 0-putchar program"
git push

