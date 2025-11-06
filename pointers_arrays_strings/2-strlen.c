#include "main.h"

/**
 * _strlen - retourne la longueur d'une chaîne de caractères
 * @s: chaîne dont on veut connaître la longueur
 *
 * Return: longueur de la chaîne
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
