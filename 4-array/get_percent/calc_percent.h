#include <math.h>

int calc_percent(int matrix[], int size){
    int max=-1000000;
    int min=100000000;
    int k=0;
    double proc=0.0;
    for (int i=0;i<size;i++){
        if (matrix[i]>max)
            max=matrix[i];
        if (matrix[i]<min)
            min=matrix[i];
    }
    double r=(max-min)/2;
    for (int i=0;i<size;i++){
        if ((double)matrix[i]>r)
            k++;
    }
    proc=(k/(double)size)*100;
    return (int)proc;
}

// int calc_percent(int a[], int size){
//     int max,min,r,c;
//     min=10000000;
//     max=0;
//     c=0;
//     for (int i=0;i<size;i++){
//         if (a[i]>max)
//             max=a[i];
//     }
//     for (int i=0;i<size;i++){
//         if (a[i]<min)
//             min=a[i];
//     }
//     r=(max-min)/2;
//     for (int i=0;i<size;i++){
//         if (a[i]>=r)
//             c+=1;
//     }
//     return (double)(c/size)*100;
// }