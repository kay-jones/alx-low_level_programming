#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Betty stlye */
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{

	int i, j;

	for (i = 0; i < 10; i++)
		for (j = i + 1; j < 10; j++)
		{
			putchar("%d%d", i, j);
			if (i != 8 || j != 9)
			{
				putchar(", ");
			}
		}
		return (0);
}
