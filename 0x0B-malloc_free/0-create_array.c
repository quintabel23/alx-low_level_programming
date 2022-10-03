#include "main.h"
#include <stdlib.h>

/**
 * create _array - create array
 * @size: size of array
 * @c: char to assign
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{

	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
