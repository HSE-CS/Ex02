#pragma once
#include <stdio.h>
#include "task1.h"
#include <cmath>
#include <vector>

double average(double x, double y) {
	return (x + y) / 2.0;
}
bool good(double guess, double x, double delta) {
	return abs(guess * guess - x) < delta;
}
double improve(double guess, double x) {
	return average(guess, x / guess);
}

double iter(double guess, double x, double delta) {
	if (good(guess, x, delta))
		return guess;
	else
		return iter(improve(guess, x), x, delta);
}
double calc(double arg, double delta) {
	return iter(1.0, arg , delta);
}

double request(double sqrt, double delta) {
	double result = calc(sqrt, delta);
	return result;
}