#include "task1.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
	double result = calc(2.0);
	printf("Sqrt(%lf)=*%lf\n", 2.0, result);
	printf("%lf", iter(10, 5));
	return 0; 
}
