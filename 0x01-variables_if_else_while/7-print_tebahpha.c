#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'z';

	for (letter <= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
