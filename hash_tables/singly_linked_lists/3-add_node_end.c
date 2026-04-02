#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - ajoute un nouveau noeud à la fin d'une liste
 * @head: pointeur vers le début de la liste
 * @str: chaîne à stocker dans le nouveau noeud
 *
 * Return: adresse du nouveau noeud, ou NULL si échec
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;
	char *copy;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	copy = strdup(str);
	if (copy == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[len])
		len++;

	new->str = copy;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
