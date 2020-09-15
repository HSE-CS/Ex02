#include "task1.h"
#include <stdio.h>

int main()
{
	double result = calc(5.5);
	printf("Sqrt(%lf) = %lf\n", 5.5, result);
	double res = iter(2.0, 8.0);
	printf("%lf\n", res);
	return 0;
}