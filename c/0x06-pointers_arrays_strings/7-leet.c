#include "main.h"

char *leet(char *s)
{
	int i, j;

	char let[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int num[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == let[j])
				s[i] = (num[j] + '0');
		}	
	}
	return (s);
       	
}
