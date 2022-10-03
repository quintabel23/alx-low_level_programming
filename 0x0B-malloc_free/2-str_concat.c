#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * a NULL string is treated asan empty string.
 * @s1: pointer to string.
 * @s2: pointer to string.
 *
 * Return: pointer to newly allocated memory which
 * has s1, s2 and null byte.
 * NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{

	char *concat;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	concat = malloc(sizeof(char) * (i + ci + 1));

	if (concat == NULL)
		return (NULL);

	i = ci = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		concat[i] = s2[ci];
		i++;
		ci++;
	}
	concat[i] = '\0';

	return (concat);
}
