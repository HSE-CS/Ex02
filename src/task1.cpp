#include "../include/task1.h"
#include "task1.h"

double delta = 0.00000001;
#include <math.h>
#include <stdio.h>

double average(double x, double y) {
	return (x + y) / 2.0;
	double delta = 0.00000001;

	double average(double x, double y) {
		return (x + y) / 2.0;

	}

	bool good(double guess, double x) {
		return fabs(guess * guess - x) < delta;
		bool good(double guess, double x) {
			return fabs(guess * guess - x) < delta;

		}

		double improve(double guess, double x) {
			return average(guess, x / guess);
			double improve(double guess, double x) {
				return average(guess, x / guess);

			}

			double iter(double guess, double x) {
				if (good(guess, x))
					return guess;
				else
					return iter(improve(guess, x), x);
			}
			if (good(guess, x))
				return guess;

			double calc(double arg) {
				return iter(1.0, arg);
			else
				return iter(improve(guess, x), x);
			}
			double calc(double arg) {
				return iter(1.0, arg);

			}