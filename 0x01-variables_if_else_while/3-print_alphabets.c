#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints out both lower and hih case letters
 *
 * Return: success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
return (0);
}
