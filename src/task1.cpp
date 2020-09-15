//
// Created by stoja on 15.09.2020.
//
#include <stdio.h>
#include <math.h>

double delta=0.00000001;

double average (double x,double y) {
    return (x+y) /2.0;

}

bool good(double guess,double x) {
    return abs (guess*guess-x) <delta;

}

double improve (double guess,double x) {
    return average (guess, x/guess) ;

}

double iter(double guess, double x) {
    if (good (guess, x) )
        return guess;

    else
        return iter (improve (guess,x),x);
}
double calc(double arg) {
    return iter(1.0,arg);

}
