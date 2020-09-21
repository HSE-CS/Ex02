#include "task1.h"

int main()
{
	int f = 0;
	printf("%s", "Enter number ");
	scanf("%d", f);
	double result = calc(2.0);
	printf("Sqrt(%lf)=%lf\n", 2.0, result);
	return 0;
}
