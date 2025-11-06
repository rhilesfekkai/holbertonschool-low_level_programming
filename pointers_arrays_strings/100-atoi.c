#include "main.h"

/**
 * _atoi - convertit une chaîne en entier sans overflow intermédiaire
 * @s: chaîne à convertir
 *
 * Return: entier correspondant à la chaîne
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0, found = 0;
	int digit;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found = 1;
			digit = s[i] - '0';

			/* Vérification overflow pour INT_MAX */
			if (sign == 1)
			{
				if (num > (2147483647 - digit) / 10)
					return (2147483647);
			}
			/* Vérification overflow pour INT_MIN */
			else
			{
				if (num < (-2147483648 + digit) / 10)
					return (-2147483648);
			}

			num = num * 10 + sign * digit;
		}
		else if (found)
		{
			break;
		}
		i++;
	}

	return (num);
}
