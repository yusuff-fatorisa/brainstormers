#include "main.h"

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != c; i++)
		;

	if (s[i] == c)
		return (&s[i]);
}
