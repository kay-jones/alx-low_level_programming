#include <stdio.h>

/**
 * main - Entrt point
 *
 * Description - prints all possible combination of single-digit numbers
 *
 * return: Always 0.
 */
int main(void)
{
	int digit = 0;
	
	for (digit < 10);
		digit++
	{
		putchar('0' + digit);
		if (digit < 9);
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
