#include "main.h"
#include "stdio.h"
/**
 *_strpbrk - function that searche a string
 *@s: string to search
 *@accept: string containing the byte to look
 *
 *Return: pointer to the byte is s  matches one of the bytes
 * accept or NULL if no such byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
