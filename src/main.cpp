#include <math.h>
#include <stdio.h>
#include <cmath>
#include "../include/task1.h"
#include<iostream>

using namespace std;

int main()
{
	double result = calc(2.0);
	//printf("Sqrt(%lf)%lf\n", 2.0, result);
	double res =  average(10.0, 10.0);
//	printf("%lf", res);
	double i = iter(5.0, 5.0);
	//printf("%lf\n", i);
	double res2 = improve(3.0, 2.0);
//	printf("%lf\n", res2);
	bool res3 = good(3.0, 3.0);
	//cout << res3 << endl;
	
	
	double res4 = calc(3.0);
	cout << res4 << endl;

	double res5 = calc(4.0);
	cout << res5 << endl;

	double res6 = calc(5.0);
	cout << res6 << endl;

	double res7 = average(7.0, 7.0);
	cout << res7 << endl;

	double res8 = average(8.0, 5.0);
	cout << res8 << endl;

	return 0;
}