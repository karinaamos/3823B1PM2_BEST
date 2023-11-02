#include <math.h>

int calc_percent(int a[], int size){
    int max,min,r,c;
    min=10000000;
    max=0;
    c=0;
    for (int i=0;i<size;i++){
        if (a[i]>max)
            max=a[i];
    }
    for (int i=0;i<size;i++){
        if (a[i]<min)
            min=a[i];
    }
    r=(max-min)/2;
    for (int i=0;i<size;i++){
        if (a[i]>=r)
            c+=1;
    }
    return (double)(c/size)*100;
}