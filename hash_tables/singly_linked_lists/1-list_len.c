#include "lists.h"

/**
 * list_len - retourne le nombre d'elements dans une liste list_t
 * @h: pointeur vers la tete de la liste
 *
 * Return: nombre de noeuds
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
