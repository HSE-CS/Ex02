#pragma once
#include <iostream>
#include "task1.h"
#include <cmath>
#include <vector>
#include <random>
#define SIZE 10

using namespace std;

int main() {
	int N = 0;
	cout << "Enter a number of tests" << endl;
	cin >> N;
	mt19937 generator;
	double result = 0;
	double number = 0;
	int flag = 1;
	double delta = 0;
	vector<double> a(N);
	delta = GenerateDelta(generator);
	a = GenerateNumber(generator, N);
	for (int i = 0; i < N; ++i) {
		result = request(a[i], delta);
		printf("%d.Realsqrt - %lf. Sqrt(%lf) = %lf\n", i + 1, sqrt(a[i]),  a[i], result);
		if (!checkresult(result, a[i], delta)) {
			flag = 0;
		}
	}
	if (flag==1)
		printf("OK");
	else
		printf("Something went wrong...");
	return 0;
}