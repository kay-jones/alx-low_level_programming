#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - prints out numbers without char  variables
 *
 * Return: success
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar('0' + digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
