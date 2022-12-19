#include "main.h"

/**
 * swap_int - function that swaps two integer values
 * @a: first integer variable
 * @b: second integer variable
 * Return: return 0 if successful
 */

void swap_int(int *a, int *b)
{
	int Didi;

	Didi = *a;
	*a = *b;
	*b = Didi;
}
