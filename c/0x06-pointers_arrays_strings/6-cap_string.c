#include "main.h"
#include <stdio.h>

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] ==  '?'
			|| s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
			|| s[i] == '}' || s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
