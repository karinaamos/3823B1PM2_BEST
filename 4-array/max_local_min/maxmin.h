int maxmin(int a[], int size){
    int max;
    max=-10000;
    for (int i=1;i<size-1;i++){
        if ((a[i-1]>a[i])&&(a[i+1]>a[i])){
            if (max<a[i])
                max=a[i];
        }
        if ((a[0]<a[1]))
            if (max<a[0])
                max=a[0];
        if ((a[size-2]>a[size-1]))
            if (max<a[size-1])
                max=a[size-1];
    }
    return max;
}