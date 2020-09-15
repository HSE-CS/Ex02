#include <iostream>
#include "task1.h"

using namespace std;
int main() {
    double a;
    cin>>a;
    double result = calc(a);
    printf("Sqrt(%lf)=%.6lf\n", a, result);
}
