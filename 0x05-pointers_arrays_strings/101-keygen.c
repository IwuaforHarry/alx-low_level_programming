#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main -to generate random valid passwords
 * Return: return 0 when successful
 */

int main(void)
{
	int pass;
	int sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2772 - sum);

	return (0);
}
