
#include <stdio.h>


int gcd(int a, int b)
{
	// Everything divides 0 
	if (a == 0 || b == 0)
		return 0;

	// base case
	if (a == b)
		return a;

	// a is greater
	if (a > b)
		return gcd(a - b, b);
	return gcd(a, b - a);
}


int main()
{
	int a = 98, b = 56;
	printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
	return 0;
}