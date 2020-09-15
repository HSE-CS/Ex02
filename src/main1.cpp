#include <stdio.h>
#include "task1.h"


int main()
{
	double x = 4.0;
	double result = calc(x);
	printf("Sqrt(%lf)=%lf\n", x, result);
	printf("%d", good(1.0, 1.1));
	return 0;
}