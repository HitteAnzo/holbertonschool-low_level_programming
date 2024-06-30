/**
 * leet - Encodes a string into leet spelling.
 * @s: string to process
 *
 * Return: the leeted string
 */
char *leet(char *s)
{
	char low_leetable[] = "aeotl";
	char up_leetable[] = "AEOTL";
	char leets[] = "43071";

	int i;

	char *ptr = s;

	while (*ptr)
	{
		for (i = 0; leets[i]; i++)
		{
			if (*ptr == low_leetable[i] || *ptr == up_leetable[i])
				*ptr = leets[i];
		}
		ptr++;
	}
	return (s);
}
