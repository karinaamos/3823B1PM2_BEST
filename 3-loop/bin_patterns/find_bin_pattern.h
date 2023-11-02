#include <math.h>

char find_bin_pattern(int n){
    int c,s;
    s=0;
    c=0;
    int a[10000];
    while (n>=2){
        a[s]=n%2;
        n=n/2;
        s+=1;
    }
    a[s]=n;
    for (int i=1;i<s;i++){
        if ((a[i]==0)&&(a[i+1]==1)&&(a[i-1]==1))
            c+=1;
    }
    return c;
}