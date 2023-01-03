#include "main.h"
#include<stdio.h>
/**
 * print_diagsums -Function to print sum of two diaginals of a matrix
 * @a: array pointer
 * @size: array size
 * Return: return void when complete
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
			sum1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum2 += *(a + i);
	}
	printf("%d, %d\n", sum1, sum2);
}
