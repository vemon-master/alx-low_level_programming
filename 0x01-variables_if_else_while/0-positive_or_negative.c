#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */

int main(void)/* the main function starts here */
{
	int n;/*here we are nameing the variable*/

	srand(time(0));/* this part makes sure there is a random figure */
	n = rand() - RAND_MAX / 2;/*this part we are calling the random figure */
	/* your code goes there */
	/* in this part we are going to use the else if condition */
	if (n > 0)
	{printf("%d is positive\n", n);
	}
	else if (n == 0)
	{printf("%d is zero\n", n);
	}
	else
	{printf("%d is negative\n", n);
	}
	return (0);
}
