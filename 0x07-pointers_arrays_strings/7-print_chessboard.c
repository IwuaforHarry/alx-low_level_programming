#include "main.h"
/**
 * print_chessboard - Function that prints chess board
 * @a: pointer to the string array
 * Return: return void when complete
 */

void print_chessboard(char (*a)[8])
{
	int dad;
	int mom;

	for (dad = 0; dad < 8; dad++)
	{
		for (mom = 0; mom < 8; mom++)
		{
			_putchar(a[dad][mom]);
		}
		_putchar(10);
	}
}
