#include "main.h"

/**
 * puts2 - affiche un caractère sur deux d'une chaîne
 * @str: chaîne à parcourir
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
