#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*more headers go everywhere*/
/* betty style doc for function main goes there */
/*main(void) function to generate a random number*/
/*return (0) after execution*/

/* betty style doc for function main(void) goes there*/
int main(void)
/*function main(void) to generate a random number*/
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* My code starts here*/
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
