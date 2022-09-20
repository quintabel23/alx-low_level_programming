#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: parameter s
 * Return: string in reverse
 */

void rev_string(char *s)
{
	int i, j, k, tmp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;

	while (k < j)
	{
		tmp = s[k];
		s[k] = s[j];
		s[j] = tmp;
		k++;
		j--;
	}
}
