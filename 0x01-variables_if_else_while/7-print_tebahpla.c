#include <stdio.h>
/**
 * main - Entry point
 * Return: Aways return 0 (Success)
 */

int main(void)
{
	char l;

	for (l = 'z' ; l >= 'a' ; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
