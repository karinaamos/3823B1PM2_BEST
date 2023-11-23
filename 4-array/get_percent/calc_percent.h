#include <math.h>

int calc_percent(int a[], int size){
    int max,min,c;
    double r;
    min=1000000;
    max=-1000000;
    c=0;
    for (int i=0;i<size;i++){
        if (a[i]>max)
            max=a[i];
    }
    for (int i=0;i<size;i++){
        if (a[i]<min)
            min=a[i];
    }
    r=(fabs)((max-min))/2;
    for (int i=0;i<size;i++){
        if (a[i]>r)
            c+=1;
    }
    return (c/(double)size)*100;
}