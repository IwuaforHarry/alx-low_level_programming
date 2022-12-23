#include "main.h"

/**
 * reverse_array - A function to reverse the arrays of integers
 * @n: Number of content of arrays
 * @a: integer arrays to be reversed
 */

void reverse_array(int *a, int n)
{
	int Didi;
	int Ozi;

	for (Ozi = n - 1; Ozi >= n / 2; Ozi--)
	{
		Didi = a[n - 1 - Ozi];
		a[n - 1 - Ozi] = a[Ozi];
		a[Ozi] = Didi;
	}
}
