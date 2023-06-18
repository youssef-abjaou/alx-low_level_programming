#include <stdio.h>
#include <stdlib.h>
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *str1 = "abcdefghijklmnopqrstuvwxyz";
	const char *str2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int i;

	for (i = 0; str1[i] != '\0'; i++)
	{
		putchar(str1[i]);
	}
	i = 0;
	for (i; str2[i] != '\0'; i++)
	{
		putchar(str2[i]);
	}
	return (0);
}
