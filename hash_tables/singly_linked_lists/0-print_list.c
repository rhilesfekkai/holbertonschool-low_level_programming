#include <stdio.h>
#include "lists.h"

/**
 * print_list - affiche tous les éléments d'une liste list_t
 * @h: pointeur vers la tête de la liste
 *
 * Return: le nombre de nœuds
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}
