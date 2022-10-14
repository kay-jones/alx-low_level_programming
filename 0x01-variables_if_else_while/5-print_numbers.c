#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription - prints numbers from 0 to 10
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	printf('\n');
	return (0);
}
