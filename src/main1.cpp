#include <stdio.h>
#include "task1.h"


int main(){
    double result = calc(2.0);
    printf("%.8lf", calc(4.0));
    printf("Sqrt(%lf)=%lf\n", 2.0, result);
    return 0;
}

