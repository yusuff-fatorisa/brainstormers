#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}

			if (accept[j + 1] == '\0' && s[i] != accept[j])
			{
				return (count);
			}
		}
	}
	return (count);
}
