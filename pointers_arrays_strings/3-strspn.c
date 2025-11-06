#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search in
 * @accept: the string containing accepted characters
 *
 * Return: number of bytes in initial segment of s which consist
 *         only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				break;
			j++;
		}
		if (accept[j] == '\0')
			break;
		count++;
		i++;
	}
	return (count);
}
