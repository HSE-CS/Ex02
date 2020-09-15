//
//  task1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 15.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include <stdio.h>
#include <math.h>
//#include <cmath>

double delta = 0.00000001;

double average(double x, double y){
    return (x+y)/2.0;
}

bool abs(bool src_num){
    if (src_num < 0.0)
        return src_num * -1;
    else return src_num;
}

bool good(double guess, double x){
    return abs(guess*guess-x) < delta;
}

double improve(double guess, double x){
    return average(guess, x/guess);
}

double iter(double guess, double x){
    if(good(guess, x))
        return guess;
    else
        return iter(improve(guess, x), x);
}

double calc(double arg){
    return iter(1.0, arg);
}
