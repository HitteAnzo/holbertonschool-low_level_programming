#include "main.h"

/**
 * _strncpy - Copies a string into another up to the n-th character
 * @dest: string to be replaced with n characters from src
 * @src: source string
 * @n: count of chars
 *
 * Return: resulting string as char*
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (dest[i] && i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
