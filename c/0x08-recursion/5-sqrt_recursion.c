#include "main.h"

int _root(int num, int sqrt)
{
	if (sqrt * sqrt > num)
		return -1;
	if (sqrt * sqrt == num)
		return sqrt;
	return (_root(num, sqrt + 1));
}

int _sqrt_recursion(int n)
{
	return (_root(n, 0));
}
