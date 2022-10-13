#include <stdlib.h>
#include <time.h>
/* more headers goes there*/
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0.
 */
int main(void)
{
	int n, last_digit_of;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit_of = n % 15;

	printf("last_digit_of %d is %d", n, last_digit_of);

	if (last_digit_of > 5)
		printf(" and is greater than 5");
	else if (last_digit_of == 0)
		printf(" and is 0");
	else
		printf(" and is less than 6 and not 0");

	printf("\n");
	return (0);
