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
	int i, a, b, c, d, res, j = 0;

	int ind1 = _len(n1) - 1;
	int ind2 = _len(n2) - 1;

	if (ind1 + 1 < size_r && ind2 + 1 < size_r)
	{
		for (i = ind1; i >= 0; i--)
		{
			a = n1[ind1] - '0';
			b = n2[ind2] - '0';

			res = a + b;

			if (res > 9)
			{
				c += res / 10;
				c += (n1[ind1 - 1] - '0');
			}

			d = res % 10;

			r[ind2] = d + '0';
			
			ind2--;
			j++;
		}
	}
	return (r);
}
