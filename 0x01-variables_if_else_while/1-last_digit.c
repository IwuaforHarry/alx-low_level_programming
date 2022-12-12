#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main -program to assign a random number to the variable
 *
 * Return: return 0 is success after execution
*/
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*iterations and coding begins here*/
	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	if (m < 6 && m != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}
