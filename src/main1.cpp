#include<math.h>
#include<stdio.h>
#include "task.h"

int main() {
	double delta = 0.00000001;
	double result = calc(2.0);
	printf("Sqrt(%lf)=%lf\n", 2.0, result);
	return 0;
}