#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to fill
 * @b: constant byte
 * @n: number to bytes to be used
 *
 * RETURN: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{

	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
