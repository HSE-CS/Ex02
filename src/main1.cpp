#include <stdio.h>
#include"task1.h"


int main()
{
	double n;
	n = 16.0;

	double result = calc(n);
	printf("Sgqrt(%lf) = % 1lf\n", n , result);
	return 0;
}