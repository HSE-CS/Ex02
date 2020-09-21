#include <math.h>
#include <stdio.h>
#include "task1.h"
#include <iostream>
using namespace std;

double del = 0.0000001;

double average(double x, double y)
{
	return (x + y) / 2.0;
}
bool good(double inf, double x)
{
	return fabs(inf * inf - x) < del;
}

double improve(double inf, double x)
{
	return average(inf, x / inf);
}
double iter(double inf, double x)
{
	if (good(inf, x))
		return inf;
	else
		return iter(improve(inf, x), x);
}
double cals(double arg)
{
	return iter(1.0, arg);
}