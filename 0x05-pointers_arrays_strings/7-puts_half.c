#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @s: this is the input string
 */

void puts_half(char *s)
{
	int index, half;

	index = 0;
	while (s[index] !=  '\0')
		index++;

	half = index / 2;

	if (index % 2 == 1)
		half++;

	while (half < index)
	{
		_putchar(s[half]);
		half++;
	}
	_putchar('\n');
}
