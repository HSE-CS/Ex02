#include <math.h>
#include<stdio.h>
#include "task.1"

static double abs(double x) {
	return x > 0 ? x : -x;
}

double delta = 0.00000001;

double average(delta x, double y) {
	return (x + y) / 2.0;
}
bool good(double guess, double x) {
	return abs(guess * guess - x) < delta;
}
double improve(double guess, double x) {
	return average(guess, x / guess);
}
double iter(double guess, double x) {
	if (good(guess, x))
		return guess;
	else
		return iter(improve(guess, x), x);
}
double calc(double arg) {
	if (arg < delta)
		return 0.0;
	return iter(1.0, arg);
}
