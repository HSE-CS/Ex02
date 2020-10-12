#pragma once
#include <iostream>
#include "task1.h"
#include <cmath>
#include <random>
#include <cstdlib>
#include <vector>

using namespace std;

//double GenerateNumber() {
//	double cost;
//	cost = rand()%1000;
//	return cost;
//}

vector<double> GenerateNumber(mt19937& generator, int length) {
	vector<double> costs(length);
	for (double& cost : costs) {
		cost = uniform_real_distribution<>(0, 10000)(generator);
	}
	return costs;
}

double GenerateDelta(mt19937& generator) {
	double cost = 0;
	cost = uniform_real_distribution<>(0, 100000)(generator)*0.0000001;
	return cost;
}

bool checkresult(double result, double number, double delta) {
	if (abs(result - sqrt(number)) < delta) {
		/*double a = abs(result - sqrt(number));
		cout << a << endl;*/
		return true;
	}
	return false;
}


