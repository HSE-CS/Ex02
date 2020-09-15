#ifndef CIRCLE_H
#define CIRCLE_H
#include <math.h>
#include <stdio.h>
using namespace std;

double average(double x, double y);
bool good(double guess, double x);
double improve(double guess, double x);
double iter(double guess, double x);
double calc(double arg); 

#endif