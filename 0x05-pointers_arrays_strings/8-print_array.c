#include "main.h"
#include<stdio.h>

/**
 * print_array -prints n elements of integer arrays
 * @a: pointer to array
 * @n: number of arrays
 * Return:L void if complete
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
