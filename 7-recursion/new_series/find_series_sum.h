#include <math.h>


double _find_sum_elements_series(int k){
    return k == 0 ? 0 :(_find_sum_elements_series(k - 1) + 1) / k;
}

double find_sum_elements_series(int k){
    if (k < 0)
        return - 1;

    double sum = 0;

    for (int i = 0; i < k; i++){
        sum += _find_sum_elements_series(i);
    }

    return sum;
}