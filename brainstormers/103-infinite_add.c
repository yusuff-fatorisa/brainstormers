#include "main.h"

int _len(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, c, i, j = 0;
	int add = 0, res;

	for (i = _len(n1) -1; i >= 0 && i <= size_r; i--)
	{
		j = _len(n2) - 1;

		a = n1[i] - '0';
		b = n2[j] - '0';
		add += a;
		res = a + b;

		if (res > 9)
		{
			c = res % 10;
			add = res / 10;
		}
		else
		{
			c = res;
		}

		r[i] = c + '0';
		j++;
	}
	return (r);
}
