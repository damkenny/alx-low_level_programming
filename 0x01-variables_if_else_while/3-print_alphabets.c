#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int lower;
	int upper;

	for (lower = 97; lower <= 122; ++lower)
	{
		printf("%c", lower);
	}
	for (upper = 65; upper <= 90; ++upper)
	{
		printf("%c", upper);
	}
	printf("\n");
	return (0);
}
