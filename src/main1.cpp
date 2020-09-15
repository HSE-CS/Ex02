#include <stdio.h>
#include"task1.h"


int main()
{
	double n;
	printf(" Input number: \n");
	scanf_s("%lf", &n);

	double result = calc(n);
	printf("Sgqrt(%lf) = % 1lf\n", n , result);
	return 0;
}