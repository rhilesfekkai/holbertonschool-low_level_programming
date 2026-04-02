#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - ajoute un nouveau noeud au début d'une liste
 * @head: pointeur vers le début de la liste
 * @str: chaîne à stocker dans le nouveau noeud
 *
 * Return: adresse du nouveau noeud, ou NULL si échec
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *copy;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	copy = strdup(str);
	if (!copy)
	{
		free(new);
		return (NULL);
	}

	while (str[len])
		len++;

	new->str = copy;
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
