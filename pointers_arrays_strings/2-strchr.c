#include "main.h"
#include "stdio.h"
/**
 *_strchr - locate character in a string
 *@s: string
 *@c: first occurence of the character
 *
 *Return: c
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
			return (s - 1);
		if (i == 0)
			return (NULL);
	}
	return (0);
}
