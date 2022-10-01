#include "main.h"

/**
 * _memset - fill a block of memory
 * @s: starting address
 * @b: num of bytes
 * @n: number to bytes to be used
 *
 * Return: pointer to the memory area s
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
