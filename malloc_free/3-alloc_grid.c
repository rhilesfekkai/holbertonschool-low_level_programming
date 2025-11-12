#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - crée une grille (tableau à deux dimensions) d'entiers
 * @width: nombre de colonnes
 * @height: nombre de lignes
 *
 * Return: pointeur vers le tableau 2D, ou NULL en cas d'échec
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	return (NULL);

	/* Allocation du tableau de pointeurs (pour chaque ligne) */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	return (NULL);

	/* Allocation de chaque ligne */
	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(sizeof(int) * width);
	if (grid[i] == NULL)
	{
	/* Libére la mémoire déjà allouée avant de quitter */
	while (i > 0)
	{
	i--;
	free(grid[i]);
	}
	free(grid);
	return (NULL);
	}

	/* Initialisation de la ligne à 0 */
	for (j = 0; j < width; j++)
	grid[i][j] = 0;
	}

	return (grid);
}
