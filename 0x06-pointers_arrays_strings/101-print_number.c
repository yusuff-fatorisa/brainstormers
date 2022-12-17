#include "main.h"

void print_number(int n)
{
	int tens = 10;
	int num;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	for (; tens < n; tens *=10)
		;
	tens /= 10;

	while (tens > 0)
	{
		num = n / tens;
		_putchar(num + '0');
		n = n - (num * tens);
		tens /= 10;
	}
}
