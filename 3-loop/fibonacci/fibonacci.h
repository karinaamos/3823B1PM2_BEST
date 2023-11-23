long fib(int m){
    int s;
    s=2;
    if (m>0){
        int a[1000]={1,1};
        for (int i=2;i<1000;i++){
            a[i]=a[i-2]+a[i-1];
            if (a[i]>m)
                return s;
            s+=a[i];
        }
        return s;
    }
    else 
        return -1;
}