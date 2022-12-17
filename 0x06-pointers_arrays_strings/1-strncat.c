#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int len_dest, i;
	
	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
		;
	
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len_dest] = src[i];
		len_dest++;
	}
	if (n < i)
		dest[len_dest] = '\0';

	return (dest);

}
