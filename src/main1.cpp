#include <math.h>
#include <iostream>

#include "task1.h"

int main()
{
	int n;

	std::cout << "Enter your number: ";
	std::cin >> n;

	double result = calc(n);

	std::cout << "Sqrt of " << n << " is " << result << std::endl;
	return 0;
}