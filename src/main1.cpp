#include <stdio.h>
#include "task1.h"


int main()
{
	double result = calc(2.0);
	printf("Sqrt(%lf)=%lf\n", 2.0, result);
	printf("%lf", iter(3.0, 10.0));
	return 0;
}