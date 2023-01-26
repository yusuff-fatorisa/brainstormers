#include "main.h"

/*
int _len(char* s)
{
	int i;
	for (i = 0; s[i]; i++)
		;
	return i;
}
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
