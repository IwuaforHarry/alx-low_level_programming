#include "main.h"

/**
 * _strlen - function to return string length
 * @s: Char to check
 * Return: return 0 when complete
 */

int _strlen(char *s)
{
	int Didi = 0; /* counter Didi starts from 0*/

	for (; *s++;)
		Didi++;
	return (Didi);
}
