#include <stdio.h>
/**
 * main - Entry point
 * Return: Aways return 0 (Success)
 */
int main(void)
{
	char o;

	for (o = 'a' ; o <= 'z' ; o++)

	{
		if (o == 'q' || o == 'e')

			continue;

		putchar(o);
	}
	putchar('\n');
	return (0);
}
