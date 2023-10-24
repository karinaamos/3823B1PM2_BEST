#include <math.h>

int QuadraticEquation(double a, double b, double c){
    int x,y,z,w,u,k;
    z=b*b-4*a*c;
    if (z>=0){
    x=((-1)*b+sqrt(z))/(2*a);
    y=((-1)*b-sqrt(z))/(2*a);
    return x+y;
    }
    else {
        w=(sqrt(z*(-1)))/2*a;
        u=((-1)*sqrt(z*(-1)))/2*a;
        k=((-1)*b)/2*a;
        return k+k+w+u;
    }
    if(((x+y)-(int)(x+y))<0.5)
        return x+y;
    else
        return (int)(x+y)+1;
}