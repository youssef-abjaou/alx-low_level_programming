#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last;
	char string[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	if (last > 5)
		printf("%s %d is %d and is greater than 5\n", string, n, last);
	if (last == 0)
		printf("%s %d is %d and is 0\n", string, n, last);
	if (last < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", string, n, last);
	return (0);
}
