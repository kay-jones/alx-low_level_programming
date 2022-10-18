#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - prints all numbers of base 16 in lower case
 *
 * Return: 0.
 */
int main(void)
{
	int digit = 0;

	for (digit < 16; digit++)

	{
		if (digit < 10)
		{
			putchar('0' + digit);
		}
		else if (digit >= 10)
		{
			putchar('a' + digit % 10);
		}
	}
		putchar('\n');
		return (0);
}
