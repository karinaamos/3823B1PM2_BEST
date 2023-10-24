int chocolate(int n, int m, int k){
    if (((n*m)>=k)&&(k%n==0)&&(n>0)&&(m>0))
        return 1;
    else 
        return 0;
}