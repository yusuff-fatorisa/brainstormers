#include <stdio.h>

int main(void)
{
	long int i, n;
	long int max;
	n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
			max = i;
		}
	}
	printf("%lu\n", max);
	return (0);
}
