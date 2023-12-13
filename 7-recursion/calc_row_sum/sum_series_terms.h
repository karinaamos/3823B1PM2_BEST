#include <math.h>

double sum_series(int n){
    if (n < 1){
        return -1;
    }
    if (n == 1){
        return 1;
    }
    else{
        return 1.0/n + sum_series(n-1);
    }
}