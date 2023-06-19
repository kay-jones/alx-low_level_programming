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

	i = 48;
	j = 49;

	while ((i < 57) && (j < 58))
	{
		putchar(i);
		putchar(j);
		if ((i == 56) && (j == 57))
		{
			putchar(\n);
			i++;
			J++;
		}
		else
		{
				putchar(44);
				putchar(32);
				if (j < 57)
				{
					j++;
				}
				else
				{
					i++;
					j = 1 + i;
				}
		}
	}
		return (0);
}
