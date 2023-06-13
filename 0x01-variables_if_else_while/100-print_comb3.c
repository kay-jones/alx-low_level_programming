#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
		for (j = i + 1; j < 10; j++)
		{
			putchar ("%d%d", i, j);
			if (i != 8 || j != 9)
			{
				putchar(",");
		}
		}
	return (0);
}
