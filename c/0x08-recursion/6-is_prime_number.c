#include "main.h"

int _prime(int num, int div)
{
	if (div == num)
		return 1;
	if (num % div == 0)
		return 0;
	return (_prime(num, div + 1));
}

int is_prime_number(int n)
{
	if (n < 2 || n % 2 == 0)
		return 0;
	return (_prime(n, 2));
}
