#include <math.h>

unsigned long long calc_e(char order){
    double epsilon = 1.0;
    
    for (int i = 0; i < order; ++i) {
        epsilon *= 0.1;
    }
    
    double e = 1.0;
    double term = 1.0;
    unsigned long long iterations = 0;
    
    while (term > epsilon) {
        term /= iterations + 1.0;
        e += term;
        iterations++;
    }
    
    return iterations;
}