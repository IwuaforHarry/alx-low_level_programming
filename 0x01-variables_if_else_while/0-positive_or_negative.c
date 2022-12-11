#include<stdlib.h>
#include<time.h>
/*more headers go everywhere*/
#include<stdio.h>

/**
* main -main function to print a set of strings
*
* Return: return (0) when successful
*/
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* conditional if statements with corresponding outputs*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
