#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Fonction principale
 *
 * Description : Affiche si le nombre stocké dans n est positif, nul ou négatif
 *
 * Return: 0 (succès)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}



