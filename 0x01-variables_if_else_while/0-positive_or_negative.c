#include <stdlib.h>
#include <time.h>
/* more header code goes there */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - It is the main function
 *
 * Return: An integer signifes success or fail
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	printf("\n");
	return (0);
}
