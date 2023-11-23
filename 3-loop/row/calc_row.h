#include <math.h>
long long calc_row(int n, long long k){
    long long r;
    r=0;
    if (fabs(n*k)>100000000)
        return 0;
    for (int i=0;i<n+1;i++){
        r+=i;
    }
    if ((r*k>9223372036854775807)&&(r*k<((-1)*9223372036854775808)))
        return 0;
    else 
        return r*k;
}