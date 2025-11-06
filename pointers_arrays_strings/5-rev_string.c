#include "main.h"

/**
 * rev_string - inverse une chaîne de caractères
 * @s: chaîne à inverser
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	/* Trouver la longueur de la chaîne */
	while (s[j] != '\0')
		j++;

	/* Inverser la chaîne en place */
	j--; /* pour ignorer le '\0' */
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
