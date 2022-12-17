#include "main.h"
#include <stdlib.h>

char *_strchr(char *s, char c)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			j = i;
			break;
		}
	}
	if (s[j] == c)
	{
		return (&(s[j]));
	}

	else
	{
		return (NULL);
	}
}
