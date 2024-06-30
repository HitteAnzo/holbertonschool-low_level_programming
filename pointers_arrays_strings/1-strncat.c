#include "main.h"

/**
 *_strncat - Concatenate two strings.
 *@dest: Pointer to the string that will be appended with src.
 *@src: Pointer to the string that will be appended to dest.
 *@n: number of characters to append.
 *
 * Return: The pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_storage = dest;
	char *src_storage = src;

	while (*dest)
		dest++;

	while (*src != src_storage[n])
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (dest_storage);
}
