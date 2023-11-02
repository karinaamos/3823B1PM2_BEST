#include <math.h>

char count_max_digit(long long d){
    long long dd;
    int max,c;
    dd=d;
    max=0;
    c=0;
    while (d!=0){
        if ((fabs)(d%10)>max)
            max=(fabs)(d%10);
        d=(fabs)(d)/10;
    }
    while (dd!=0){
        if ((fabs)(dd%10)==max)
            c+=1;
        dd=(fabs)(dd)/10;
    }
    return c;
}