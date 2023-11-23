#include <math.h>

double integral(double a, double b, double c, double left, double right){
    double q = (a*right*right*right / 3 )+ (b*right*right/2)+ c*right;
    double w = (a*left*left*left/3)+(b*left*left/2)+ c*left;
    double res = q-w;
    return res;
}