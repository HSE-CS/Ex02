#include <iostream>
#include <cmath>
#include "task1.h"

int main() 
{
	int x;
	std::cout << "Input: ";
	std::cin >> x;
	int y = 2;
	double result = average(x, y);
	printf("Sqrt(%lf) = %lf\n", 2.0, result);
	return 0;
}
