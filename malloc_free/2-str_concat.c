#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatène deux chaînes de caractères
 * @s1: première chaîne
 * @s2: deuxième chaîne
 *
 * Return: pointeur vers une nouvelle chaîne (s1 + s2),
 *         ou NULL si échec de l’allocation
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, len1 = 0, len2 = 0;

    /* Si une des chaînes est NULL la traite comme un vide */
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	/* Calcul de la longueur de s1 et s2 */
	while (s1[len1] != '\0')
	len1++;
	while (s2[len2] != '\0')
	len2++;

	/* Alloc mémoire pour les deux chaînes + '\0' final */
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
	return (NULL);

	/* Copie de s1 dans concat */
	for (i = 0; i < len1; i++)
	concat[i] = s1[i];

	/* Copie de s2 dans concat juste après s1 */
	for (j = 0; j < len2; j++)
	concat[i + j] = s2[j];

	concat[i + j] = '\0'; /* Fin de chaîne */

	return (concat);
}
