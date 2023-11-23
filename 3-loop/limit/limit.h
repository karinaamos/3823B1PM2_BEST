#include <math.h>

double limit(double eps, int n){
    double x,xx,r,g;
    r=0;
    g=0;
    for (int i=1;i<n+1;i++){
        x=(i)/(sqrt(i*i+i));
        xx=(i+1)/(sqrt((i+1)*(i+1)+i+1));
        r=fabs(xx-x);
        if (r<eps)
            return xx;
    }
    return x;
}
