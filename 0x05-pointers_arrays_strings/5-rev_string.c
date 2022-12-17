#include "main.h"

void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
		;
	
	for (j = 0; j < i; j++)
	{
		temp = s[i - 1];
		s[i - 1] = s[j];
		s[j] = temp;
		i--;
	}
}
