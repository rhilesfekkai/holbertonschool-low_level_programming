#include <stdlib.h>
#include "main.h"

/**
 * free_grid - libère une grille 2D allouée dynamiquement
 * @grid: la grille à libérer
 * @height: le nombre de lignes de la grille
 *
 * Return: rien
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	return;

	/* Libérer chaque ligne allouée */
	for (i = 0; i < height; i++)
	free(grid[i]);

	/* Libérer le tableau de pointeurs */
	free(grid);
}
