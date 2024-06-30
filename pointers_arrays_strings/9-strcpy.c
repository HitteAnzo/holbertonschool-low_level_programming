#include "main.h"

/**
 *_strcpy- Copies one string into another.
 *@dest: Pointer to the string that will be written.
 *@src: Pointer to the string that will be copied.
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
