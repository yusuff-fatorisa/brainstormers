#include "main.h"

int start(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			return (i);
		}
	}
	return (0);
	_putchar('\n');
}

int atoi(char *s)
{
	int i;
	int index = start(char *s);

	for (i = index; s[i]; s[i] >= '0' && s[i] <= '9'; i++)
	{
		s[i] -= '0';
	}
	return (*s);
}
