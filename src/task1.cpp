/**
 * Created by Stanislav on 15/09/2020.
 */

#include "task1.h"

double delta = 0.00000001;

double abs_custom(double x) {
    if (x > 0) return x;
    return -x;
}

double average(double x, double y) {
    return (x + y) / 2.0;
}

bool good(double guess, double x) {
    return abs_custom(guess * guess - x) < delta;
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
    return iter(1.0, arg);
}