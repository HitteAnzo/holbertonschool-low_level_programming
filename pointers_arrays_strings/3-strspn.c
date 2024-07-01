#include "main.h"
/**
 *_strspn - function that get the length of a prefix substring
 *@s: initial segment
 *@accept: string with  the list of character to match in s
 *
 *Return: number of bytes in the initial segment
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, flag;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}
	return (0);
}
