#include <stdio.h>
/**
 * main - Entry point
 * Return: Aways return 0 (Success)
 */

int main(void)
{
	int l;
	char w;

	for (l = 0 ; l <= 9 ; l++)
		putchar('0' + l);

	for (w = 'a' ; w <= 'f' ; w++)
		putchar(w);

	putchar('\n');
	return (0);
}
