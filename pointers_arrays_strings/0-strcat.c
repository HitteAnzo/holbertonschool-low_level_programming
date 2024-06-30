#include "main.h"

/**
 *_strcat - Concatenate two strings.
 *@dest: Pointer to the string that will be appended with src.
 *@src: Pointer to the string that will be appended to dest.
 *
 * Return: The pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_storage = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (dest_storage);
}
