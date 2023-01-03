#include "main.h"
/**
 * _memcpy - Function that copies memory
 * @dest: Destination of the copied memory
 * @src: Memory area to be copied
 * @n: Bytes of copied memory
 * Return: return new string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int dad;

	for (dad = 0; dad < n; dad++)
		*(dest + dad) = *(src + dad);

	return (dest);
}
