#include <math.h>

double f(int n, int a){
    if (a == 1){
        return 1.0;
        }
    else if (a == n+1){
        return 1.0 / a;
    }
    else {
        return 1.0 / a + f(n, a - 1);
    }
}

double sum_series(int n){
    double k = 0.0;
    if (n <= 0)
        return -1;
    if (n > 10000){
        int x1 = n /10000;
        for (int i = 1; i < x1; i++){
            x1 += f((i-1) * 10000, i * 10000);
        }
        int x2 = n % 10000;
        for (int i = 0; i < x2; i++){
            k += f((i-1) + 10000 * x1 , i + 10000 * x1);
        }
    }
    else {
        k += f(0, n);
    }
    return k; 
}