#include <stdio.h>
#include <stdlib.h>
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' && letter == 'q')
		{

			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
