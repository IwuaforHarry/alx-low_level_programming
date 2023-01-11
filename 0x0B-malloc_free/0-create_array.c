#include "main.h"
/**
 * create_array - Function that creates and initialise a char array
 * @c: Char to initialise
 * @size: Byte size to allocate
 * Return: returns a pointer to the array otherwise return Null
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
