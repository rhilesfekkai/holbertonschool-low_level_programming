#include <stdlib.h>
#include "main.h"

/**
 * _strdup - renvoie un pointeur vers une nouvelle chaîne,
 *            qui est une copie de la chaîne donnée en paramètre
 * @str: chaîne à dupliquer
 *
 * Return: pointeur vers la nouvelle chaîne, ou NULL si échec
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	if (str == NULL)
	return (NULL);

	/* calculer la longueur de str */
	while (str[len] != '\0')
	len++;

	/* allouer la mémoire nécessaire (+1 pour le '\0') */
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	return (NULL);

	/* copier chaque caractère de str dans dup */
	for (i = 0; i < len; i++)
	dup[i] = str[i];

	dup[len] = '\0'; /* terminer la chaîne */

	return (dup);
}
