long long change(int a, int b, int c, int d){
   long long int f = c;
    long long int s = a * 100 + b;
    long long int k  = f * 100 + d;
    long long int sd = k - s;
    if (sd< 0)
        return -1;
    else 
        return 100 * (sd / 100) + (sd % 100);
}
