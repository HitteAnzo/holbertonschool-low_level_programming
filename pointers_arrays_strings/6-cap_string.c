/**
 * cap_string - Capitalizes all words of a string
 * @s: string to process
 *
 * Return: the capitalized string
 */
char *cap_string(char *s)
{
	char separator_list[] = " \t\n,;.!?\"(){}";
	int i;
	int new_word = 1; /* Boolean flag for the start of a new word*/

	char *ptr = s;

	while (*ptr)
	{
		if (new_word && *ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32;
		}

		/* Reset new_word flag if current character is a separator */
		for (i = 0; separator_list[i]; i++)
		{
			if (*ptr == separator_list[i])
			{
				new_word = 1;
				break;
			}
			new_word = 0;
		}

		ptr++;
	}
	return (s);
}
