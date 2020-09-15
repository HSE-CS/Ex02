#include <stdio.h>
#include <iostream>
#include "task1.h"
using namespace std;

int main()
{
    double n;
    cin >> n;
    double result = calc(n);
    printf("Sqrt(%lf)=%lf\n",n,result);
    cout<<n<<result;
}
