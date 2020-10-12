#pragma once
#include <iostream>
#include "task1.h"
#include <cmath>
#include <random>
#include <cstdlib>
#include <vector>

using namespace std;

double average(double x, double y);
bool good(double guess, double x);
double improve(double guess, double x);
double iter(double guess, double x);
double calc(double arg);
double request(double sqrt, double delta);
vector<double> GenerateNumber(mt19937& generator, int length);
bool checkresult(double result, double number, double delta);
double GenerateDelta(mt19937& generator);