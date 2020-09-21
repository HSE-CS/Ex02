#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include "task1.h"

int main()
{
    /*double result = calc(2.0);
    printf("Sqrt(%lf)=%lf\n", 2.0, result);
    return(0);*/

    int result = 0;
    result = good(2.0, 3.45);
    printf("%lf\n", result);
    result = good(5.55, 0.45);
    printf("%lf", result);
    
}
