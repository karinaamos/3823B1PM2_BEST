char left_more(double a[], unsigned int size){
    int c;
    c=0;
    for (int i=1;i<size;i++){
        if (a[i]>a[i-1])
            c+=1;
    }
    return c;
}