#include "main.h"

void puts_half(char *str)
{
	int len, i, n;

	for (len = 0; str[len] != '\0'; len++)
		;
	if (len % 2 != 0)
		n = (len - 1) / 2;
	else
		n = len / 2;

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
