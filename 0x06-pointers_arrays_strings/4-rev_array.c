#include "main.h"

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n; i++)
	{
		tmp = a[n-1];
		a[n-1] = a[i];
		a[i] = tmp;
		n--;
	}
}
