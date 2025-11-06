#include "main.h"

/**
 * _strcpy - copie la chaîne pointée par src dans dest
 * @dest: buffer de destination
 * @src: chaîne source
 *
 * Return: pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0'; /* ajouter le caractère nul */
	return (dest);
}
