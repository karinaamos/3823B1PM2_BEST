#include <math.h>

int scalar_product(int* vec1, int* vec2, int size){
    int ch=0, zn=0, l1=0, l2=0;
    for (int i=0;i<size;i++){
        ch+=vec1[i]*vec2[i];
        l1+=vec1[i]*vec1[i];
        l2+=vec2[i]*vec2[i];
    }
    zn=sqrt(l1*l2);
 
    double angle= acos((double)ch/(double)zn);
    angle=angle*180/3.1415;
    return (int)angle;
    }