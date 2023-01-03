#include "main.h"
/**
 * _strstr - Function that locates a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 * Return: returns a pointer to substring beginning
 */

char *_strstr(char *haystack, char *needle)
{
	char *dad;
	char *mom;

	while (*haystack != '\0')
	{
		dad = haystack;
		mom = needle;

		while (*haystack != '\0' && *mom != '\0' && *haystack == *mom)
		{
			haystack++;
			mom++;
		}

		if (*mom == '\0')
			return (dad);
		haystack = dad + 1;
	}
	return (0);
}
