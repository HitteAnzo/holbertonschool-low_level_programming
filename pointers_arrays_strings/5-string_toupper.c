/**
 * string_toupper - converts all lowercase chars of a string to uppercase
 * @s: string to process
 *
 * Return: the uppercased string
 */
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		ptr++;
	}

	return (s);
}
