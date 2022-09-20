#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - entry point
 * Return: generated password
 */

int main(void)
{
	int pass, sum;

	srand(time(NULL));
	sum = 0;
	while (x <= 2645)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2772 - sum);

	return (0);
}
