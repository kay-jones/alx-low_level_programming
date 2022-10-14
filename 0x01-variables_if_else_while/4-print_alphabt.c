#include <stdio.h>

/**
 * main - Entry point
 *
 * Desecrption - prints out lower case aplhabet expect e and q
 *
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter == 'e' && letter == 'q');
		letter++;
	}
	putchar('\n');
	return (0);
}
